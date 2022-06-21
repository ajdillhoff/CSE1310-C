#include <stdio.h>
#include <math.h>

#define BASE 8

int main() {
    int value = 0;
    int result = 0;

    printf("Enter a number in base 10: ");
    scanf("%d", &value);

    // Convert to base 8
    for (int i = 0; value > 0; i++) {
        int r = value % BASE;
        value /= BASE;

        result += (r * pow(10, i));
    }

    printf("%d\n", result);

    return 0;
}
