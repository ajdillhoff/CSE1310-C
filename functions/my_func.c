#include <stdio.h>

int my_func(int a) {
    printf("IN my_func()\n");

    if (a == 10) {
        printf("a is 10\n");
    }

    a += 10;
    printf("  a = %d\n", a);

    return a;
}
