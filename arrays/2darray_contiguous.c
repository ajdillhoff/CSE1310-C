#include <stdio.h>

int main() {
    int a[4][3] = { 0 };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("a[%d][%d] = %p\n", i, j, &a[i][j]);
        }
    }

    // Print the addresses of the first dimension
    printf("Only the first dimension...\n");
    for (int i = 0; i < 4; i++) {
        printf("a[%d] = %p\n", i, a[i]);
    }

    return 0;
}
