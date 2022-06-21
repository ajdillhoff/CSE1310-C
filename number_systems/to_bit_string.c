#include <stdio.h>

void print_binary_char(char a) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (a >> i) & 1);
    }
    printf("\n");
}

int main() {
    char num = 0;

    printf("Enter an 8-bit number: ");
    scanf("%hhi", &num);

    printf("%hhi: ", num);
    print_binary_char(num);

    return 0;
}
