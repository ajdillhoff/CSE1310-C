#include <stdio.h>

void print_string(char *str) {
    for (int i = 0; str[i]; i++) {
        printf("%c", str[i]);
    }
}

int main() {
    int a = 10;
    char format[] = "Print this value %d\n";

    printf(format, a);
    printf("%s", format);

    print_string(format);

    return 0;
}
