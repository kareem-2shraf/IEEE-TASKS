#include <stdio.h>
#include <stdlib.h>


int main()
{
    char alpha;
    printf("enter the character :");
    scanf("%c",&alpha);
    if(alpha == 'a' || alpha == 'A')
    {
        printf("VOWEL");
    }
    else if(alpha == 'e' || alpha == 'E')
    {
        printf("VOWEL");
    }
    else if(alpha == 'i' || alpha == 'I')
    {
        printf("VOWEL");
    }
    else if(alpha == 'o' || alpha == 'O')
    {
        printf("VOWEL");
    }
    else if(alpha == 'u' || alpha == 'U')
    {
        printf("VOWEL");
    }
    else{
        printf("Consonant");
    }
    return 0;
}