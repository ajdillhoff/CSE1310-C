#include <stdio.h>

int main() {
    int count = 0;

    int arr[10] = { 0 };

    while (1) {
        count++;
        if (count % 2) {
            continue;
        }

        printf("%d\n", count);

        if (count == 100) break;
    }

    return 0;
}
