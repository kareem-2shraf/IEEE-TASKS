#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month_no;
    printf("enter month number:");
    scanf("%d",&month_no);
    if(month_no%2 != 0 || month_no == 12)
    {
        printf("this month is 31 days");
    }
    else
    {
        if(month_no == 2)
        {
            printf("this month is 28 days");
        }
        else
        {
            printf("this month is 30 days");
        }
    }
    return 0;
}