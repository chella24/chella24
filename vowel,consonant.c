#include <stdio.h>
#include <stdlib.h>

int main()
{ char c;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet:");
    scanf("%c",&c);

    if(lowercase_vowel || uppercase_vowel)
    {
        printf("%c is a vowel.",c);
    }
    else
    {
        printf("%c is a consonant.",c);
    }
    return 0;
}
