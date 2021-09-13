/*
 * Demonstrates automatic type conversion.
 */
#include <stdio.h>

int main() {
    int a = 65;

    // The format specifier of '%c' will trigger an automatic type conversion.
    printf("a = %c\n", a);

    // The first value on the right is an integer.
    // It will be automatically converted to float
    // since the second value is a floating point number.
    float f = 10 / 2.5;

    return 0;
}
