#include <stdio.h>

int main() {
    unsigned long n = 50;
    unsigned long t1 = 0, t2 = 1, temp = 0;

    for (unsigned long i = 1; i <= n; i++) {
        printf("%ld, ", t1);
        temp = t1 + t2;
        t1 = t2;
        t2 = temp;
    }
    printf("\n");

    return 0;
}
