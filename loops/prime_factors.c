/* Find the prime factorization of a number. */
#include <stdio.h>
#include <math.h>

int main() {
    unsigned long n = 600851475143;

    printf("The prime factorization of %lu is...", n);

    // If n is currently divisible by 2, factor by 2
    while (n % 2 == 0) {
        printf("2 ");
        n /= 2;
    }

    // n is guaranteed to be odd, skip even factors
    for (unsigned long i = 3; i < n; i += 2){
        // Factor while i divides n
        while (n % i == 0) {
            n /= i;
            printf("%lu ", i);
        }
    }

    printf("%lu!\n", n);

    return 0;
}
