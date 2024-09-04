#include <stdio.h>
#define _GNU_SOURCE
#include <string.h>

#include "string_utils.h"

#define MAX_STR 128

int main() {
    char str1[MAX_STR] = { 0 };
    char str2[MAX_STR] = { 0 };

    printf("Enter a string: ");
    fgets(str1, MAX_STR, stdin);
    trim(str1);

    printf("Enter another string: ");
    fgets(str2, MAX_STR, stdin);
    trim(str2);

    char *found = strcasestr(str1, str2);

    if (!found) {
        printf("Could not find \"%s\" in \"%s\"\n", str2, str1);
    } else {
        printf("Found \"%s\"\n", found);

        printf("str1 = %p\nfound = %p\n", str1, found);
    }

    return 0;
}