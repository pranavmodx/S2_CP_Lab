#include <stdio.h>

void copyStr(char *target, char *source)
{
    while (*source)
    {
        *target = *source;
        source++;
        target++;
    }
    *target = '\0';
}

int main()
{
    char source[100], target[100];
    printf("Enter source string : ");
    gets(source);
    copyStr(target, source);
    printf("Target string is : %s\n", target);

    return 0;
}
