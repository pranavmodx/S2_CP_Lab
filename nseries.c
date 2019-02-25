// Program to compute sum of series 1 - x^2/2! + x^4/4! - x^6/6! + ... 

#include <stdio.h>
#include <math.h>

float fact(float n) {
    if (n <= 1)
        return 1;
    else
        return n * fact(n-1);
}

int main()
{
    int x, n;
    float sum = 0, nthTerm;
    printf("Enter x : ");
    scanf("%d", &x);
    printf("Enter n : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        nthTerm = (pow(-1, i - 1) * pow(x, 2 * i - 2)) / fact(2 * i - 2);
        sum += nthTerm;
    }
    printf("The sum of series is %f \n", sum);  
    return 0;
}