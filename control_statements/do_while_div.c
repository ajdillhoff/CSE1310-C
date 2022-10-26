#include <stdio.h>

int main() {
    int a = 10, b = 4, c = 2;

    do {
        b /= c;
        a += c;
    } while (a < 14 && b > 0);

    printf("%d%d%d\n", a, b, c);

    return 0;
}
