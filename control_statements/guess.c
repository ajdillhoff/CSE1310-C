#include <stdio.h>


int main() {
    int guess = 0;
    const int ANSWER = 1337;

    printf("Enter your guess: ");
    scanf("%d", &guess);

    if (guess == ANSWER) {
        printf("Good job!\n");
    } else {
        printf("Get good.\n");
    }
}