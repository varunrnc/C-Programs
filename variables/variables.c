#include<stdio.h>

int num1 = 10;
void myfun();
void myfun2();

int main()
{
    myfun();
    myfun2();
}

void myfun() {
    printf("%d\n", num1);
}
void myfun2() {
    printf("%d\n", num1);
}