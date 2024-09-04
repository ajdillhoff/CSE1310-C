#include <stdio.h>

int main() {
    for (int i = 6; i < 9; i++) {
        for (int j = 11; j > 6; j--) {
            if (j < 11) {
                printf(" ");
            }

            if (j == 8) continue;

            for (int k = 0; k < 5; k++) {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
