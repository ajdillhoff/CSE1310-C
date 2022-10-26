#include <stdio.h>

int main() {
    int i_val = 0;
    long l_val = 0;
    char c_val = 0;
    float f_val = 0;
    double d_val = 0;

    // Read an integer from the user
    printf("Enter an integer: ");
    // The format specifier lets `scanf` know what type of value to expect.
    // The address passed as the second argument correlates with the format specifier.
    // This address is used by `scanf` to store the value.
    scanf("%d", &i_val);

    printf("You entered %d\n", i_val);

    // long int example
    printf("Enter a big integer: ");
    scanf("%ld", &l_val);

    printf("You entered %ld\n", l_val);

    // char example
    printf("Enter a character: ");
    // `scanf` will read the characters in the buffer until either a newline or space is encountered.
    // After the previous call to `scanf`, for the long value, the user will have pressed enter.
    // This newline character is not read by that call to `scanf`.
    // Instead, it is left in a buffer.
    // When the following call to `scanf` is made, it will immediately read whatever is in the buffer.
    // Since the newline from the enter key is left in there, it will effectively skip our input.
    // This loop will flush the buffer so that the character can be read.
    // Comment this `while` loop out and recompile to see it in action.
    while (getchar() != '\n');
    scanf("%c", &c_val);

    printf("You entered '%c'\n", c_val);

    // float example
    printf("Enter a float: ");
    scanf("%f", &f_val);

    printf("You entered %f\n", f_val);

    // double example
    printf("Enter a double: ");
    scanf("%lf", &d_val);

    printf("You entered %lf\n", d_val);

    return 0;
}
