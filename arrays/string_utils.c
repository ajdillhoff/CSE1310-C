#include <string.h>

#include "string_utils.h"

void trim(char str[]) {
    int l = strlen(str);
    if (str[l-1] == '\n') {
        str[l-1] = 0;
    }
}