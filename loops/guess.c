#include <stdio.h>

#define ANSWER 93

int main() {
    int guess = 0;

    printf("Guess a number: ");
    scanf("%d", &guess);

    while (guess != ANSWER) {
        printf("WRONG! Try again: ");
        scanf("%d", &guess);
    }

    printf("You got it!\n");

    return 0;
}
