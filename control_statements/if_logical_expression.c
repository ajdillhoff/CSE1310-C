#include <stdio.h>

int main(int argc, char const *argv[]) {
    int input1 = 0, input2 = 0;
    const int lower = 10, upper = 20;

    printf("Enter two numbers between %d and %d: ", lower, upper);
    int result = scanf("%d%d", &input1, &input2);

    if (result = 2) {
        printf("You did not enter two numbers.\n");
        return 1;
    }

    if (input1 < lower || input1 > upper) {
        printf("The first number is not between %d and %d.\n", lower, upper);
        return 1;
    }

    // CHECK: Would the program still behave the same if you used an if-else
    // statement instead of an if statement?
    if (input2 < lower || input2 > upper) {
        printf("The second number is not between %d and %d.\n", lower, upper);
        return 1;
    }

    printf("Congratulations on following instructions.\nYour compliance has been noted.\n");

    return 0;
}
