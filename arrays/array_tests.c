#include "array_utils.h"
#include <stdio.h>

void print_array(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size - 1; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[size - 1]);
}

int main() {
    int arr[MAX_SIZE] = { 1, 2, 3, 4, 5 };
    int size = 5;

    print_array(arr, size);
    size = insert(10, 0, arr, size);
    print_array(arr, size);
    size = remove_val(0, arr, size);
    print_array(arr, size);

    return 0;
}
