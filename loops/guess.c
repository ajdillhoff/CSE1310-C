#include <stdio.h>
#include <stdlib.h>

#define ANSWER 93

int main() {
    int guess = 0;

    printf("Guess a number: ");
    int result = scanf("%d", &guess);

    while (getchar() != '\n');

    while (guess != ANSWER) {
        printf("WRONG! Try again: ");
        scanf("%d", &guess);
        while (getchar() != '\n');
    }

    printf("You got it!\n");

    return 0;
}
