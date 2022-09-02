#include <stdio.h>

#define BUFFER_SIZE 512

int main() {
    char buffer[BUFFER_SIZE];

    fgets(buffer, BUFFER_SIZE, stdin);

    printf("%s", buffer);

    return 0;
}
