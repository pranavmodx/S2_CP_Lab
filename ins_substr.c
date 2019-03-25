// Program to insert a substring into a main string

#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, pos, lstr, lsub;
    char string[50], substring[50], newstring[100];

    printf("Enter a string and substring : ");
    scanf("%s %s", string, substring);
    printf("Enter position to insert (0-%lu) : ", strlen(string) - 1);
    scanf("%d", &pos);

    lstr = strlen(string);
    lsub = strlen(substring);

    if (pos < 0 || pos > lstr - 1)
    {
        printf("Check your entered position");
    }
    else if (pos == lstr - 1)
    {
        for (i = 0; i < lstr; i++)
            newstring[i] = string[i];
        for (j = 0; j < lsub; j++, i++)
            newstring[i] = substring[j];
    }
    else if (pos == 0)
    {
        for (i = 0; i < lsub; i++)
            newstring[i] = substring[i];
        for (j = 0; j < lstr; j++, i++)
            newstring[i] = string[j];
    }
    else if (0 < pos < lstr)
    {
        for (i = 0; i < pos; i++)
            newstring[i] = string[i];
        for (j = 0; j < lsub; j++)
            newstring[pos + j] = substring[j];
        for (; j + pos < lstr + lsub; i++, j++)
            newstring[pos + j] = string[i];
    }

    printf("The new string is : %s \n", newstring);
    return 0;
}