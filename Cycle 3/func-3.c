#include <stdio.h>
#include <string.h>

void reverseStr(char str[])
{
    int i;
    char temp;
    int l = strlen(str);
    for (i = 0; i < (l / 2); ++i)
    {
        temp = str[i];
        str[i] = str[l - i - 1];
        str[l - i - 1] = temp;
    }
}
int main()
{
    char str[50];
    printf("Enter string: ");
    scanf("%s", str);
    reverseStr(str);
    printf("The reversed string is: ");
    printf("%s", str);

    return 0;
}