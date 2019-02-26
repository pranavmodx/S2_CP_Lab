// Program to merge two arrays (presumed to be sorted) in a sorted order.

#include <stdio.h>

int i, n1, n2;

void inputArr(int a[10], int n)
{
    printf("Enter elements of array in sorted order : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

int main()
{
    int arr1[10], arr2[10], mergedArr[20];
    int j = 0, k = 0, flag = 0;

    printf("Enter size of 1st array : ");
    scanf("%d", &n1);
    inputArr(arr1, n1);

    printf("Enter size of 2nd array : ");
    scanf("%d", &n2);
    inputArr(arr2, n2);

    for (i = 0; i < n1 + n2; i++)
    {
        if (j < n1 && k < n2)
        {
            if (arr1[j] < arr2[k])
            {
                mergedArr[i] = arr1[j];
                j++;
            }
            else
            {
                mergedArr[i] = arr2[k];
                k++;
            }
        }
        else if (j == n1)
        {
            mergedArr[i] = arr2[k];
            k++;
        }
        else
        {
            mergedArr[i] = arr1[j];
            j++;
        }
    }

    printf("Merged array is : ");
    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d\t", mergedArr[i]);
    }

    return 0;
}