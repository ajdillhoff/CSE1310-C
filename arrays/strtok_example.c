#include <stdio.h>
#include <string.h>

#include "string_utils.h"

// name,address,number,id
// name\0address,number,id
// *     ^
// name\0address\0number,id
//       *        ^

int main() {
    char buffer[128] = { 0 };

    printf("Enter a line of CSV: ");
    fgets(buffer, 128, stdin);
    trim(buffer);

    int original_length = strlen(buffer);

    char *token = strtok(buffer, ",");

    while (token) {
        printf("token = %s\n", token);
        for (int i = 0; i < original_length; i++) {
            printf("%c", buffer[i]);
        }
        printf("\n");

        token = strtok(NULL, ",");
    }


    return 0;
}