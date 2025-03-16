#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num1,num2;
    int sum,sub,mult,divide;
    printf("Enter the two Nums");
    scanf("%d%d",&num1,&num2);
    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    
    printf("the arethmatic operations done :\n");
    printf("sum = %d ---- sub = %d ---- mult = %d\n",sum,sub,mult);
    if(num1<num2)
    {
        printf("division is invalid operation");
    }
    else {
        divide = num1 / num2;
        printf("divide = %d",divide);
    }
    return 0;
}