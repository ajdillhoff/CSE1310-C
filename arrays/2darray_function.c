#include <stdio.h>

void print_array(int a[][4], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }
}

int main() {
    int a[3][4] = { 0 };

    return 0;
}
