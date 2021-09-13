#include <stdio.h>

extern int my_func(int);

int main() {
    int a = 10;

    my_func(a);

    return 0;
}
