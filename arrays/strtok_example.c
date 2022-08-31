#include <stdio.h>
#include <string.h>

#include "string_utils.h"

int main() {
    char buffer[128] = { 0 };

    printf("Enter a line of CSV: ");
    fgets(buffer, 128, stdin);
    trim(buffer);

    char *token = strtok(buffer, ",");

    while (token) {
        printf("token = %s\n", token);

        token = strtok(NULL, ",");
    }


    return 0;
}