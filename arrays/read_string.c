#include <stdio.h>

#define BUFFER_SIZE 16

int main() {
    char buffer[BUFFER_SIZE];

    fgets(buffer, BUFFER_SIZE, stdin);
    // scanf("%s", buffer);

    printf("%s", buffer);

    return 0;
}
