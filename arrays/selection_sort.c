#include <stdio.h>

int main() {
    char arr[] = {5, 8, 1, 3, 10, 6, 3, 12, 0, 11};

    for (int i = 0; i < 10; i++) {
        int min_j = i;
        for (int j = i + 1; j < 10; j++) {
            if (arr[j] < arr[min_j]) {
                // Possible minimum found
                min_j = j;
            }
        }

        // Swap values
        if (min_j != i) {
            int t = arr[i];
            arr[i] = arr[min_j];
            arr[min_j] = t;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
