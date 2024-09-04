#include <stdio.h>

extern int my_func(int);

int main() {
    int a = 10;

    printf("Address of my_func is %p\n", my_func);

    my_func(a);

    return 0;
}
