#include <stdio.h>
#include <stdlib.h>


int main()
{
    char alpha;
    printf("Enter the character :");
    scanf("%c",&alpha);
    if((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z'))
    {
        printf("The character is an alphapet");
    }
    else
    {
        printf("the character is not alphapet");
    }
    return 0;
}