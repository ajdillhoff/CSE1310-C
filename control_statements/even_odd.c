#include <stdio.h>

int main() {
    int input = 0;
    int is_odd = 0;

    printf("Plese enter a value: ");
    scanf("%d", &input);

    is_odd = input % 2;

    if (!is_odd) {
        printf("%d is even.\n", input);
    } else {
        printf("%d is odd.\n", input);
    }

    return 0;
}