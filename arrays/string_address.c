#include <stdio.h>

int main() {
    char str[] = "whatever";
    char buffer[8];
    int a = 10;

    printf("Address of str is %p -> %c\n", str, str[0]);

    for (int i = 0; str[i] != 0; i++) {
        printf("%c", str[i]);
    }

    printf("%s", str);

    fgets(buffer, 8, stdin);

    printf("You typed \"%s\"\n", buffer);

    return 0;
}