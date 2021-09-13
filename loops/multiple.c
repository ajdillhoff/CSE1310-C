/* Sum all natural numbers below n that are multiples of 3 or 5. */
#include <stdio.h>

int main() {
    int n = 0;
    int sum = 0;

    printf("> ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("sum = %d\n", sum);

    return 0;
}
