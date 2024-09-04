#include "array_utils.h"
#include <stdio.h>


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
