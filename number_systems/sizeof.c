/*
 * Displays the sizes of primitive data types.
 */
#include <stdio.h>

int main() {
    printf("sizeof(char) =   %ld\n", sizeof(char));
    printf("sizeof(short) =  %ld\n", sizeof(short));
    printf("sizeof(int) =    %ld\n", sizeof(int));
    printf("sizeof(float) =  %ld\n", sizeof(float));
    printf("sizeof(double) = %ld\n", sizeof(double));

    int number = 10;

    unsigned long size = sizeof number;

    printf("sizeof number is %ld\n", size);

    return 0;
}
