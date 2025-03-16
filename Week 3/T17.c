#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num1,num2;
    char op;
    printf("Enter the two nums");
    scanf("%d%d",&num1,&num2);
    printf("enter the operation you need : ");
    scanf(" %c",&op);
    switch (op)
    {
    case '+':
        int sum = num1 + num2;
        printf("sum = %d",sum);
        break;
    case '-':
        int sub = num1 - num2;
        printf("sub = %d",sub);
        break;
    case '*':
        int mult = num1 * num2;
        printf("mult = %d",mult);
        break;
    case '/':
        float division = num1 / num2;
        printf("div = %d",division);
        break;
    default:
    printf("invalid operation");
        break;
    }




}