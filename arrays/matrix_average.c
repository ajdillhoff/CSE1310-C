/*
 * Compute the average value of a 2D square matrix.
 */

#include <stdio.h>

#define MAT_SIZE 4

double average(double mat[][MAT_SIZE]) {
    double sum = 0.0;

    for (int i = 0; i < MAT_SIZE; i++) {
        for (int j = 0; j < MAT_SIZE; j++) {
            sum += mat[i][j];
        }
    }

    return sum / (MAT_SIZE * MAT_SIZE);
}

int main() {
    double mat[MAT_SIZE][MAT_SIZE] = {
        1, 3, 5, 7,
        2, 4, 6, 8,
        100, 200, 300, 400,
        10, 20, 30, 40
    };

    printf("Average: %.2lf\n", average(mat));

    return 0;
}
