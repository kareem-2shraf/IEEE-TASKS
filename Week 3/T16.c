#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int grade[5];
    int total=0,aver,percentage;
    
    for(int i=0;i<5;i++)
    {
        printf("Enter the Grade : ");
        scanf("%d",grade[i]);
    }
    for(int i=0;i<5;i++)
    {
        total += grade[i];
    }
        aver = total/5.0;
        percentage = (total/500.0)*100.0;
    printf("Total = %f ---- average = %f ---- percentage = %f ",total,aver,percentage);
    return 0;
}