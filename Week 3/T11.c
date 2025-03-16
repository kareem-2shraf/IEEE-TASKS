#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
    int x,y;
    printf("Enter the base : ");
    scanf("%d",&x);
    printf("Enter the power : ");
    scanf("%d",&y);
    int power = pow(x,y);
    printf("The result of x^y = %d",power);
    return 0;
}