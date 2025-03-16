#include <stdio.h>
#include <stdlib.h>

int main()
{
    float length,width;
    float area;
    printf("Enter the dimensions of rectangle :");
    scanf("%f%f",&length,&width);     
    area = length * width;
    printf("the perimeter of a rectangle is : %0.2f",area);
    return 0;
}