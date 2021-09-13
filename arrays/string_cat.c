#include <stdio.h>
#include <string.h>

int main() {
    char s1[128] = "This is the first string.";
    char s2[128] = "This is the second string.";

    // concatenate two strings
    strcat(s1, s2);

    printf("%s\n", s1);

    return 0;
}
