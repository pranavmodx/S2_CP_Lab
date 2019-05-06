// Program to find the product of two matrices.

#include <stdio.h>

void inputMat(int arr[10][10], int, int);
void displayMat(int arr[10][10], int, int);
void multMat(int m1[10][10], int m2[10][10], int p[10][10], int, int);

int main()
{

    int mat1[10][10], mat2[10][10], prod[10][10], r1, c1, r2, c2;

    printf("Enter dimensions of matrix 1 : ");
    scanf("%d %d", &r1, &c1);
    printf("Enter elements of matrix 1 : ");
    inputMat(mat1, r1, c1);
    printf("\nMatrix 1\n");
    displayMat(mat1, r1, c1);

    printf("Enter dimensions of matrix 2 : ");
    scanf("%d %d", &r2, &c2);
    printf("Enter elements of matrix 2 : ");
    inputMat(mat2, r2, c2);
    printf("\nMatrix 2\n");
    displayMat(mat2, r2, c2);

    if (c1 == r2)
    {
        printf("\nProduct of Matrices\n");
        multMat(mat1, mat2, prod, r1, c2);
        displayMat(prod, r1, c2);
    }
    else
        printf("Incompatible dimensions for Matrix Multiplication");

    return 0;
}

void inputMat(int arr[10][10], int r, int c)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void displayMat(int arr[10][10], int r, int c)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void multMat(int m1[10][10], int m2[10][10], int p[10][10], int r1, int c2)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            int sum = 0;
            for (int k = 0; k < 10; k++)
            {
                sum += m1[i][k] * m2[k][j];
            }
            p[i][j] = sum;
        }
    }
}
