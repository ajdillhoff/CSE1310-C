#include <stdio.h>

int main() {
    int height = 0;

    printf("Enter pyramid height: ");
    scanf("%d", &height);

    switch (height) {
        case 3:
            printf("  *\n");
        case 2:
            printf(" ***\n");
        case 1:
            printf("*****\n");
            break;
        default:
            printf("We're too tired for that.\n");
    }

    return 0;
}