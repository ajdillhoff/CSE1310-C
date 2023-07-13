/*
 * Separates words in a string using strtok().
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "I ate a apple.";

    // Grab the first token
    char *token = strtok(str, " ");

    // Create another variable to store the previous token
    char *prev_token = NULL;

    // While there are words to process...
    while (token != NULL) {
        printf("%s\n", token);
        // Update the previous token BEFORE getting the next token
        prev_token = token;

        // Remember, the first argument to strtok() is NULL after the first call
        // since it already has a pointer to the string.
        token = strtok(NULL, " ");
    }

    return 0;
}