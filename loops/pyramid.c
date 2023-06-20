#include <stdio.h>

int main() {
    int l = 1;
    int height = 7;
    int max_length = height * 2 - 1;

    for (int i = 0; i < height; i++) {
        int s = (max_length - l) / 2 + 1;
        printf("%*c", s, '*');
        for (int j = 0; j < l - 1; j++) {
            printf("*");
        }
        l += 2;
        printf("\n");
    }

    return 0;
}
