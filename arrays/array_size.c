#include <stdio.h>

void process_array(int a[]) {
    // Once passed to a function,
    // the array identifier is treated as a pointer.
    printf("In process_array...\n");
    printf("  sizeof(a) = %ld\n", sizeof(a));
}

int main() {
    int a[10] = { 0 };

    printf("In main()...\n");
    printf("  sizeof(a) = %ld\n", sizeof(a));

    // Since `a` is defined in this scope, the size will reflect
    // the number of bytes allocated to that array.
    // This can be used to determine the number of elements.
    int numel = sizeof(a) / sizeof(a[0]);

    printf("  number of elements: %d\n", numel);

    process_array(a);

    return 0;
}
