#include <stdio.h>
#include <string.h>

#define BUF_SIZE 512

int main() {
    char s1[] = "This is some random string.";
    char buffer[BUF_SIZE] = { 0 };

    // Copy s1 to buffer
    strcpy(buffer, s1);

    printf("s1: \"%s\"\n", s1);
    printf("buffer: \"%s\"\n", buffer);

    // Copy 10 characters from s1 to buffer
    memset(buffer, 0, sizeof(buffer));
    strncpy(buffer, s1, 10);

    printf("buffer: \"%s\"\n", buffer);

    return 0;
}
