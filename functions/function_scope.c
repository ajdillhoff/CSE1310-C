#include <stdio.h>

int func(int a) {
    printf("  Top of func: a = %d\n", a);
    printf("  Top of func: a = %p\n", &a);

    // Square
    a *= a;

    printf("  After operation: a = %d\n", a);
    printf("  After operation: a = %p\n", &a);

    return a;
}

int main() {
    int a = 10;
    printf("Top of main: a = %d\n", a);
    printf("Top of main: a = %p\n", &a);

    int b = func(a);

    printf("After func: a = %d\n", a);
    printf("After func: a = %p\n", &a);

    return 0;
}
