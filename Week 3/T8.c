#include <stdio.h>
#include <stdlib.h>
#define fraction 9/5
#define F 32
int main()
{
    float degree,degree_F;
    printf("Enter the Degree (C) : ");
    scanf("%f",&degree);
    degree_F = (degree * fraction) + F;
    printf("Degree (F) = %0.2f",degree_F);
    return 0;
}