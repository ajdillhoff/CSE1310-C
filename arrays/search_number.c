#include <stdio.h>
#include <stdlib.h>

/*
 * Generates pseudorandom numbers bounded by `l` and `h`.
 */
void random_fill(int arr[], int size, int l, int h) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (h - l) + l;
    }
}

/*
 * Search an array for a value `val`.
 *
 * Returns the index of the first occurrence of `val`.
 * Otherwise returns -1 (an invalid index).
 */
int find_value(int arr[], int size, int val) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == val) {
            return i;
        }
    }

    return -1;
}

void print_array(int arr[], int size) {
    printf("[%d, ", arr[0]);
    for (int i = 1; i < size-1; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[size-1]);
}

int main() {
    int arr[10] = { 0 };
    int search_val = 0;

    random_fill(arr, 10, 0, 100);

    print_array(arr, 10);

    printf("Enter a search value: ");
    scanf("%d", &search_val);

    int found_idx = find_value(arr, 10, search_val);

    if (found_idx > -1) {
        printf("Found %d at index %d.\n", search_val, found_idx);
    } else {
        printf("Could not find %d in array.\n", search_val);
    }

    return 0;
}
