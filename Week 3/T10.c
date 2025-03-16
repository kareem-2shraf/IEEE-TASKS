#include <stdio.h>
#include <stdlib.h>
#define week 7
#define month 30
#define year 365
int main()
{
    float days;
    double weeks,months,years;
    printf("Enter the number of days : ");
    scanf("%f",&days);
    weeks = days / week;
    months = days / month;
    years = days / year;
    printf("Days into weeks = %lf ---- Days into months = %lf ---- Days into years = %lf",weeks,months,years);
    return 0;
}