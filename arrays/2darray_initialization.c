#include <stdio.h>

int main() {
    int a[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    // Can also initialize contiguously.
    int b[4][4] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16
    };

    // Using pointer notation, these can be accessed contiguously as well
    for (int i = 0; i < 16; i++) {
        printf("*(*a + %d) = %d\n", i, *(*a + i));
        printf("*(*b + (15 - %d)) = %d\n", i, *(*b + (15 - i)));
    }

    return 0;
}
