#include <stdio.h>

int main(int argc, char const *argv[])
{
    int count = 0;

    while (count <= 100) {
        printf("count = %d\n", count++);
    }
    return 0;
}
