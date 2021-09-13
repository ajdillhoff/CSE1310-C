#include <string.h>
#include <stdio.h>

int main() {
    char s[] = "Is this string long?";
    // `size_t` is an unsigned integer type of at least 16 bit
    size_t len = strlen(s);

    printf("The string \"%s\" is %ld characters long.\n", s, len);

    return 0;
}
