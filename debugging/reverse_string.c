#include <stdio.h>
#include <string.h>
#include <assert.h>

void reverse_string(char string[], int size) {
    char temp = 0;

    // The condition of this loop should be `i < size / 2` instead of `i < size`.
    // For examples sake, let's assume we did not catch this error initially.
    for (int i = 0; i < size; i++) {
        temp = string[i];
        string[i] = string[size - i - 1];
        string[size - i - 1] = temp;
    }
}

int main() {
    char string[] = "Example!";

    // Let's attempt to reverse the string.
    // We expect the string to be "!elpmaxE" after the function call.
    reverse_string(string, strlen(string));

    // We can use `assert` to check if the string is reversed correctly.
    assert(strcmp(string, "!elpmaxE") == 0);
}