#include <stdio.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

/*int main() {*/
    /*int input = 0;*/
    /*int i = 2;*/
    /*int is_prime = TRUE;*/

    /*printf("Enter an integer: ");*/
    /*scanf("%d", &input);*/

    /*while (i < input) {*/
        /*if (input % i == 0) {*/
            /*is_prime = FALSE;*/
        /*}*/
        /*i++;*/
    /*}*/

    /*if (is_prime) {*/
        /*printf("%d is prime.\n", input);*/
    /*} else {*/
        /*printf("%d is not prime.\n", input);*/
    /*}*/

    /*return 0;*/
/*}*/

/*int main() {*/
    /*int input = 0;*/
    /*int i = 1;*/

    /*printf("Enter an integer: ");*/
    /*scanf("%d", &input);*/

    /*while (input % ++i);*/

    /*if (input == i) {*/
        /*printf("%d is prime.\n", input);*/
    /*} else {*/
        /*printf("%d is not prime.\n", input);*/
    /*}*/

    /*return 0;*/
/*}*/

int main() {
    int input = 0;
    int i = 2;
    int is_prime = TRUE;

    printf("Enter an integer: ");
    scanf("%d", &input);

    while (is_prime && i <= sqrt(input)) {
        if (input % i++ == 0) {
            is_prime = FALSE;
        }
    }

    if (is_prime) {
        printf("%d is prime.\n", input);
    } else {
        printf("%d is not prime.\n", input);
    }

    return 0;
}
