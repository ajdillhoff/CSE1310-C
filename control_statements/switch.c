#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2;

    switch (a) {
        case 5:
            break;
        case 10:
            printf("%d", a * c);
        case 15:
            printf("%d", b - c);
            break;
        default:
            printf("%d\n", b * c);
    }

    return 0;
}
