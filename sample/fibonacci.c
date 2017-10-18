#include <stdio.h>

// Print first 30 Fibonacci numbers
int main(void)
{
    int a = 1;
    int b = 1;
    int i, t;
    for (i = 0; i < 200; ++i) {
        printf("%d\t", a);
        t = a;
        a = b;
        b = b + t;
    }
    printf("\n");
    return 0;
}