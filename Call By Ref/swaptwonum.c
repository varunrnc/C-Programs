#include <stdio.h>

int main()
{
    int x = 10;
    int y = 20;
    void swapVal(int, int);
    void swapRef(int*, int*);
    printf("PASS BY VALUE METHOD\n");
    printf("Before calling function swapVal x = %d y = %d", x,y);
    swapVal(x, y);
    printf("\nAfter calling function swapVal x = %d y = %d", x, y);
    printf("\n\nPASS BY REFERENCE METHOD");
    printf("\nBefore calling function swapRef x = %d y = %d", x, y);
    swapRef(&x, &y);
    printf("\nAfter calling function swapRef x = %d y = %d", x, y);

    return 0;
}

void swapVal(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("\nWithin function swapVal x = %d y = %d", x, y);
    return;
}

void swapRef(int *px, int *py)
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
    printf("\nWithin function swapRef *px = %d *py = %d", *px, *py);
    return;
}