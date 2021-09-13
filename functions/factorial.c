#include <stdio.h>

int fact(int);

int main() {
    int number = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("%d! = %d\n", number, fact(number));

    return 0;
}

int fact(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fact(n-1);
    }
}
