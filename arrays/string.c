#include <stdio.h>

int main() {
    char s[] = "Help\n";

    printf("%s\n", s);

    for (int i = 0; i < 10; i++) {
        printf("%c: %d\n", s[i], s[i]);
    }

    return 0;
}
