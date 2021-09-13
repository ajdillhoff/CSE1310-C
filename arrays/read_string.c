#include <stdio.h>

int main() {
    char buffer[512];

    fgets(buffer, 512, stdin);

    printf("%s", buffer);

    return 0;
}
