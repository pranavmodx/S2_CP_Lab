#include <stdio.h>
int rgcd(int a, int b)
{
    if ((a % b) == 0)
    {
        return b;
    }
    else
    {
        int gcd = rgcd(b, a % b);
    }
}
void nrgcd(int a, int b)
{
    while (a % b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    printf("GCD : %d", b);
}
void main()
{
    int a, b, ch, ans;
    do
    {
        printf("\nEnter the values to calculate GCD : ");
        scanf("%d %d", &a, &b);
        printf("\n1.Recursive\n2.Non-recursive\nEnter your choice : ");
        scanf("%d", &ch);
        if (ch == 1)
        {
            int d = rgcd(a, b);
            printf("\nGCD : %d ", d);
        }
        if (ch == 2)
        {
            nrgcd(a, b);
        }
        printf("\nWant to repeat?(1-yes/2-no)");
        scanf("%d", &ans);
    } while (ans == 1);
}
