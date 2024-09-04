#include <stdio.h>


int main() {
    int guess1 = 0;
    int guess2 = 0;
    const int ANSWER = 1337;

    printf("Enter your guesses: ");
    int result = scanf("%d %d", &guess1, &guess2);

    if (result != 2) {
        printf("Invalid input.\n");

        return 1;
    }

    if (guess1 == ANSWER || guess2 == ANSWER) {
        printf("Good job!\n");
    } else {
        printf("Get good.\n");
    }
}