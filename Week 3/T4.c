#include <stdio.h>
#include <stdlib.h>

int main()
{
    float length,width;
    float perimeter;
    printf("Enter the dimensions of rectangle :");
    scanf("%f%f",&length,&width);       
    perimeter = 2 * (length + width);
    printf("the perimeter of a rectangle is : %0.2f",perimeter);
    return 0;
}