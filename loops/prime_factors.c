/* Find the prime factorization of a number. */
#include <stdio.h>
#include <math.h>

int main() {
    int n = 123456789;

    printf("The prime factorization of %d is...", n);

    // If n is currently divisible by 2, factor by 2
    while (n % 2 == 0) {
        printf("2 ");
        n /= 2;
    }

    // n is guaranteed to be odd, skip even factors
    for (int i = 3; i <= sqrt(n); i += 2){
        // Factor while i divides n
        while (n % i == 0) {
            n /= i;
            printf("%d ", i);
        }
    }

    printf("%d!\n", n);

    return 0;
}
