#include <stdio.h>
#include <stdlib.h>
#define meter 100
#define kilo 1000
int main()
{
    float length;
    float length_m,length_km;
    printf("Enter the length in cm : ");
    scanf("%f",&length);
    length_m = length / meter ;
    length_km = length / kilo ;
    printf("length (m) = %0.2f ---- length (km) = %0.2f",length_m,length_km);
    return 0;
}