#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    int square_root = sqrt(x);
    printf("the square root = %d",square_root);
    return 0;
}