#include <stdio.h>
#include <stdlib.h>

typedef struct // struct to store the data of the every product
{
    char name [100];
    int id;
    float price;
}goods;
goods arr[6]= // array of struct to store the products 
{
    {"bread",1001,5},
    {"meat",1002,350},
    {"cheese",1003,60},
    {"chips",1004,10},
    {"chocolate",1005,25},
    {"book",1006,150}
};
typedef struct // struct to store the info of the buyer
{   char name[100];
    char city[100];
    char phone[12];
}data;
data person;

void getdata(void) // function to take the info from user 
{
    printf("\t Welcome to our STORE \t\n");
    printf("* Please Enter Your Personal Information first *\n");
    printf("Enter Your Name: ");
    scanf("%s", person.name);
    printf("Enter Your City: ");
    scanf("%s", person.city);
    printf("Enter Your Phone Number: ");
    scanf("%s", person.phone);
}
void menu(void) // function to display the menue for the user on the screen 
{
    printf("Id \tProduct \tPrice\n");
    printf("-------------------------\n");
    for (int i = 0;i<6;i++)
    {
        printf("%d \t%s \t%.2f", arr[i].id, arr[i].name, arr[i].price);
        printf("\n");
    }
}
float cart(void) // function to add the selected product to the cart
{
    int id;
    float cart=0.0;
    printf("\nEnter Product IDs to add to cart (Enter '0' to finish):\n");
    do
    {
       scanf("%d", &id);
       if(id==0)
       {break;}
       for (int i = 0; i < 6; i++)
       {
         if(id==arr[i].id)
         {
             cart+=(arr[i].price);
         }
         if(id==arr[i].id)
         {
             printf("%s \t %f\n",arr[i].name,arr[i].price);
         }
       }
    } while (id != 0);
    return cart;
}
void userdata(void) // function to print the info entered by the user
{
    printf("\nUser Information:\n");
    printf("Name: %s\n", person.name);
    printf("City: %s\n", person.city);
    printf("Phone: %s\n", person.phone);
}
int main()
{
    float total;
    float balance;
    int method;
     getdata();
     menu();
    total= cart();

     userdata();
    printf("Enter ur payment method ( (0) for Cash or (1) for Visa): \n");
     printf("Enter the amount of money you have :");
     scanf("%d",&balance);
    scanf("%d",&method);

    if (balance<=total)
    {
        switch (method)
        {
            case 0:
            balance-=total;
            break;
            case 1:

            default:
            printf("invalid method \n");
    
            break;
        }
    }
     printf("\nthe total price = %.2f",total);
}
