#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
int main()
{
    float radius;
    float diameter,circumference,area;
    printf("Enter the radius u have : ");
    scanf("%f",&radius);
    diameter = radius * 2;
    circumference = radius * pi * 2 ;
    area = pi * radius * radius ;
    printf("Diameter = %f *** Circumference = %f *** Area = %f",diameter,circumference,area);
    return 0;
}