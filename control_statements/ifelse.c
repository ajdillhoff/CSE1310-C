#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 15;

    if (b = c) {
        if (b == c) {
            printf("%d", c);
        }

        if (b > a) {
            printf("%d", a);
        } else if (c > a) {
            printf("%d", b);
        } else {
            printf("%d", a - b);
        }
    } else {
        printf("%d%d%d\n", a, b, c);
    }

    return 0;
}
