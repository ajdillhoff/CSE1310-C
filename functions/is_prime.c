#include <stdio.h>
#include <math.h>

int is_prime(int);

int main() {
    int input = 0;

    printf("Enter a number: ");
    scanf("%d", &input);

    if (is_prime(input)) {
        printf("%d is prime\n", input);
    } else {
        printf("%d is not prime\n", input);
    }

    return 0;
}

/*
 * Determines if `n` is a prime or not.
 */
int is_prime(int n) {
    for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}
