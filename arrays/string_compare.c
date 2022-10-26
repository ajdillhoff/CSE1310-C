#include <stdio.h>
#include <string.h>

#include "string_utils.h"

int main() {
    char buffer[128] = { 0 };
    char word[] = "test";

    printf("Enter a string: ");
    fgets(buffer, 128, stdin);
    trim(buffer);

    if (strcmp(buffer, word)) {
        printf("These strings are different.\n");
    } else {
        printf("These are the same.\n");
    }
}