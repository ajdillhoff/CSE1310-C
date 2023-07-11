#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

/*
 * Convert from base 16 to base 10.
 */
int to_base10(char *num) {
    int len = strlen(num);
    int result = 0;

    for (int i = len - 1; i >= 0; i--) {
        // Convert alpha to number
        if (isalpha(num[i])) {
            int c = toupper(num[i]) - 55;
            result += c * (int) pow(16, len - i - 1);
        } else if (isdigit(num[i])) {
            result += (num[i] - '0') * (int) pow(16, len - i - 1);
        }
    }

    return result;
}

/*
 * Convert from base 10 to base 16
 */
char *to_base16(int num) {
    char *str = calloc(32, sizeof(char));

    int i = 0;

    while (num != 0) {
        int c = 0;
        int r = num % 16;
        num /= 16;

        // Convert the digit to character
        if (r > 9) {
            c = 55 + r;
        } else {
            c = '0' + r;
        }

        str[i++] = c;
    }

    // Reverse string
    for (int i = 0, j = strlen(str) - 1; i < strlen(str) / 2; i++, j--) {
        char temp = str[j];
        str[j] = str[i];
        str[i] = temp;
    }

    return str;
}

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("USAGE: ./base_conversion NUMBER BASE\n");
        return 1;
    }

    int base = atoi(argv[2]);

    if (base == 10) {
        int num = atoi(argv[1]);
        char *conversion = to_base16(num);
        printf("%s\n", conversion);
        free(conversion);
    } else if (base == 16) {
        int conversion = to_base10(argv[1]);
        printf("%d\n", conversion);
    } else {
        printf("Base %s not supported.\n", argv[1]);
    }

    return 0;
}
