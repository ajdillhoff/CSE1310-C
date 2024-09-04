#include <stdio.h>

int selection_sort(char arr[], int num_elements) {
    int swap_counter = 0;

    if (num_elements == 0) {
        return 0;
    }

    for (int i = 0; i < num_elements; i++) {
        printf("[");
        for (int loop_idx = 0; loop_idx < 9; loop_idx++) {
            printf("%d, ", arr[loop_idx]);
        }
        printf("%d]\n", arr[9]);
        int min_j = i;
        for (int j = i + 1; j < num_elements; j++) {
            if (arr[j] > arr[min_j]) {
                // Possible minimum found
                min_j = j;
            }
        }

        // Swap values
        if (min_j != i) {
            int t = arr[i];
            arr[i] = arr[min_j];
            arr[min_j] = t;
            swap_counter++;
        }
    }

    return swap_counter;
}

int main() {
    char arr[] = {5, 8, 1, 3, 10, 6, 3, 12, 0, 11};

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int swap_counter = selection_sort(arr, 10);

    printf("%d swaps during sort.\n", swap_counter);

    return 0;
}
