#include <stdio.h>

struct Complex
{
    int real;
    int imag;
};

struct Complex add(struct Complex, struct Complex);
struct Complex sub(struct Complex, struct Complex);
struct Complex mult(struct Complex, struct Complex);
void display(struct Complex);

int main()
{
    struct Complex c1, c2, c3;
    int ch;
    printf("Enter real and imaginary part of 1st complex number : ");
    scanf("%d %d", &c1.real, &c1.imag);
    display(c1);
    printf("Enter real and imaginary part of 2nd complex number : ");
    scanf("%d %d", &c2.real, &c2.imag);
    display(c2);
    printf("\n1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        c3 = add(c1, c2);
        break;
    case 2:
        c3 = sub(c1, c2);
        break;
    case 3:
        c3 = mult(c1, c2);
        break;
    default:
        printf("Something went wrong \n");
    }
    display(c3);
    printf("\n");
    return 0;
}

struct Complex add(struct Complex c1, struct Complex c2)
{
    struct Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

struct Complex sub(struct Complex c1, struct Complex c2)
{
    struct Complex temp;
    temp.real = c1.real - c2.real;
    temp.imag = c1.imag - c2.imag;
    return temp;
}

struct Complex mult(struct Complex c1, struct Complex c2)
{
    struct Complex temp;
    temp.real = c1.real * c2.real - c1.imag * c2.imag;
    temp.imag = c1.real * c2.imag + c1.imag * c2.real;
    return temp;
}

void display(struct Complex c)
{
    printf("%d + %di \n", c.real, c.imag);
}