#include <stdio.h>

int my_func(int a) {
    printf("IN my_func()\n");

    a += 10;
    printf("  a = %d\n", a);

    return a;
}
