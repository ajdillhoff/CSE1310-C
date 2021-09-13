/*
 * An example of a variable rolling over.
 */
#include <stdio.h>

int main() {
    short a = 32767;  // Largest value that can be stored in short

    printf("%hd\n", a);
    printf("%hd\n", a + 1);

    return 0;
}
