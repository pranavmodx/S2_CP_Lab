#include <stdio.h>

int main()
{
    char str[100];
    int len = 0;
    printf("Enter a string : ");
    gets(str);
    char *ptr = &str;
    while (*ptr != '\0')
    {
        ptr++;
        len++;
    }
    printf("The length of the string is : %d \n", len);

    return 0;
}