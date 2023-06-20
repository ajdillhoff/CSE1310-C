/*
* C features a special operator called the ternary operator that works on 3 operands.
* It is a one liner replacement for if-then-else statement.
* It is convenient, but excessive usage may render the code harder to read.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int a = 10, b = 5, c = 2;

    if (a / b == 2) {
        printf("%d\n", a * c);
    } else {
        printf("%d\n", b - c);
    }

    // Equivalent ternary operator
    printf("%d\n", a / b == 2 ? a * c : b - c);

    // You can also use it to assign values to variables
    int sum = 0, input1 = 0, input2 = 0;

    printf("Enter two numbers: ");
    scanf("%d%d", &input1, &input2);

    if (input1 + input2 < 0) {
        sum = 0;
    } else {
        sum = input1 + input2;
    }

    // Equivalent ternary operator
    sum = input1 + input2 < 0 ? 0 : input1 + input2;

    return 0;
}
