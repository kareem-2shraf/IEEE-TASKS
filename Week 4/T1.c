#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num;
    printf("enter the num : ");
    scanf("%d",&num);
    if(num % 5 == 0 && num % 11 == 0)
    {
        printf("** the number is divisible by 5 & 11 **");
    }
    else{
        printf("** not divisible **");
    }
    return 0;
}