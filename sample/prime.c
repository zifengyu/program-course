#include <stdio.h>

// Print prime number less or equal than 1000
int main(void)
{
    int a = 1;
    int b = 1;
    int i, j;
    int is_prime;
    for (i = 2; i <= 1000; ++i) {
        is_prime = 1;
        for (j = 2; j < i; ++j) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("%d\t", i);
        }
    }
    printf("\n");
    return 0;
}