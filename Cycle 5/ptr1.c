#include <stdio.h>

int main()
{
    char str1[100], str2[100];

    printf("\nEnter the first string: ");
    gets(str1);

    printf("\nEnter the second string to be concatenated: ");
    gets(str2);

    char *a = str1;
    char *b = str2;

    while (*a)
    {
        a++;
    }
    while (*b)
    {
        *a = *b;
        b++;
        a++;
    }
    *a = '\0';
    printf("\nThe string after concatenation is: %s ", str1);

    return 0;
}