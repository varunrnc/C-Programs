#include <stdio.h>

int main()
{
    int x,y,z;
    int mul(int, int);
    printf("Enter two numbers: \n");
    scanf("%d %d", &x, &y);

    z = mul(x, y);
    printf("\n The product of two numbers is : %d", z);

    return 0;
}

int mul(int a, int b)
{
    int c;
    c = a * b;
    return c;
}