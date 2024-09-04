#include <stdio.h>

#define ROWS 4
#define COLS 4

void Print_Array(int array[][COLS]);

void Print_Array(int a[][COLS]) {
    a[0][0] = 100;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("a[%d][%d] = %d ", i, j, a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[3][4] = { 0 };
    int n = 3;
    int m = 4;

    Print_Array(a, n, m);

    return 0;
}
