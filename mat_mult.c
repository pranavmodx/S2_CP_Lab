// Program to find the product of two 3x3 matrices.

#include <stdio.h>

void inputMat(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void displayMat(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void multMat(int m1[3][3], int m2[3][3], int p[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int sum = 0;
            for (int k = 0; k < 3; k++)
            {
                sum += m1[i][k] * m2[k][j];
            }
            p[i][j] = sum;
        }
    }
}

int main()
{

    int mat1[3][3], mat2[3][3], prod[3][3];

    printf("Enter elements of matrix 1 : ");
    inputMat(mat1);
    printf("\nMatrix 1\n");
    displayMat(mat1);

    printf("Enter elements of matrix 2 : ");
    inputMat(mat2);
    printf("\nMatrix 2\n");
    displayMat(mat2);

    printf("\nProduct of Matrices\n");
    multMat(mat1, mat2, prod);
    displayMat(prod);

    return 0;
}