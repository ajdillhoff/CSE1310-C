#include <stdio.h>

int main() {
    char str[] = "whatever";

    printf("Address of str is %p -> %c\n", str, str[0]);

    return 0;
}