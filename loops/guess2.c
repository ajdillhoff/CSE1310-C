#include <stdio.h>

#define ANSWER 93

int main() {
    int guess = 0;

    do {
        printf("Guess a number: ");
        scanf("%d", &guess);
    } while (guess != ANSWER);

    printf("You got it!\n");

    return 0;
}
