// Program to replace a given substring in a main string with another

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], substr[100], repstr[100], newstr[200];
    int i, j = 1, k, lstr, lsub, lrep, flag, startIdx = -1;

    printf("Enter a string : ");
    scanf("%s", str);
    printf("Enter substring : ");
    scanf("%s", substr);
    printf("Enter substring to replace with : ");
    scanf("%s", repstr);

    lstr = strlen(str);
    lsub = strlen(substr);
    lrep = strlen(repstr);

    // Loop for finding 'startIdx'
    for (i = 0; i < lstr; i++)
    {
        flag = 0;
        if (str[i] == substr[0])
        {
            while (j < lsub)
            {
                if (str[i + j] != substr[j])
                {
                    flag = 1;
                }
                j++;
            }
            if (flag == 0)
            {
                startIdx = i;
                break;
            }
        }
    }

    if (startIdx != -1)
    {
        printf("Substring found at index : %d \n", startIdx);

        if (startIdx == 0)
        {
            // if substr's startIdx is found at start
            for (i = 0; i < lrep; i++)
                newstr[i] = repstr[i];
            for (j = lsub; j < lstr; j++, i++)
                newstr[i] = str[j];
        }
        else if (0 < startIdx < lstr - 1)
        {
            // if substr is in b/w the main string
            for (i = 0; i < startIdx; i++)
                newstr[i] = str[i];
            for (j = 0; j < lrep; j++, i++)
                newstr[i] = repstr[j];
            for (k = startIdx + lsub; k < lstr; k++, i++)
                newstr[i] = str[k];
        }
        else
        {
            // else 'substr' must be a single letter string at the end of the main string
            for (j = 0; j < startIdx; j++)
                newstr[i] = str[j];
            newstr[i] = repstr[0];
        }

        printf("New string is : %s \n", newstr);
    }
    else
    {
        printf("No such substring found in the main string \n");
    }

    return 0;
}