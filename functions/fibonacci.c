#include <stdio.h>

int main() {
    int n = 10;
    int t1 = 0, t2 = 1, temp = 0;

    for (int i = 1; i <= n; i++) {
        printf("%d, ", t1);
        temp = t1 + t2;
        t1 = t2;
        t2 = temp;
    }
    printf("\n");

    return 0;
}
