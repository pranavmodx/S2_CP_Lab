// Program to find the sum of two matrices.

#include <stdio.h>

void inputMat(int arr[10][10], int, int);
void displayMat(int arr[10][10], int, int);
void addMat(int m1[10][10], int m2[10][10], int p[10][10], int, int);

int main()
{
    int mat1[10][10], mat2[10][10], add[10][10], r1, r2, c1, c2;

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

    if (r1 == r2 && c1 == c2)
    {
        printf("\nSum of Matrices\n");
        addMat(mat1, mat2, add, r1, c1);
        displayMat(add, r1, c1);
    }
    else
        printf("Incompatible dimensions for Matrix Addition\n");

    return 0;
}

void inputMat(int arr[10][10], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void displayMat(int arr[10][10], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void addMat(int m1[10][10], int m2[10][10], int p[10][10], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            p[i][j] = m1[i][j] + m2[i][j];
        }
    }
}