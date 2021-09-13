#include <stdio.h>

int main() {
    int a = 10;
    char format[] = "Print this value %d\n";

    printf(format, a);
    printf("%s", format);

    return 0;
}
