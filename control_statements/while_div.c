#include <stdio.h>

int main() {
    int a = 10, b = 4, c = 2;

    while (a < 15 && c >= 0) {
        b /= c;
        a += b;
    }

    printf("%d%d%d\n", a, b, c);

    return 0;
}
