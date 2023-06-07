#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    printf("a = %d, b = %d\n", a, b);

    // Add the values of a and b and assign the result to a new variable
    int c = a + b;
    printf("a + b = %d\n", c);

    // Subtract the values of a and b and assign the result to c
    c = a - b;
    printf("a - b = %d\n", c);

    // Multiply the values of a and b and assign the result to c
    c = a * b;
    printf("a * b = %d\n", c);

    // Divide the values of a and b and assign the result to c
    // Note the result! 5 / 10 = 0.5, but c is an int, so the decimal is truncated
    c = a / b;
    printf("a / b = %d\n", c);

    // Divide the values of a and b and assign the remainder to c
    c = a % b;
    printf("Remainder of a / b = %d\n", c);

    return 0;
}