#include <stdio.h>
#include <stdlib.h>

int main()
{
    float angle1,angle2,angle3;
    printf("Enter the angles of the triangle :");
    scanf("%f%f%f",&angle1,&angle2,&angle3);
    int sum_angles = angle1 + angle2 + angle3;
    if(sum_angles == 180)
    {
        printf("VALID TRIANGLE");
    }
    else 
    {
        printf("INVALID TRIANGLE");
    }
    return 0;
}