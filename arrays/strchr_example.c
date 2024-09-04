#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    char str[] = "Naomi said, \"Fix the reactor core.\"";
    char s = '\"';

    char *location = strchr(str, s);

    printf("str = %p\n", str);
    printf("%p\n", location);
    printf("%s\n", location);
    
    return 0;
}
