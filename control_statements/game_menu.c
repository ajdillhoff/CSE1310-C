#include <stdio.h>

int main() {
    char input = 0;
    char input2 = 0;

    printf("S - Start Game\n");
    printf("L - Load Game\n");
    printf("E - Exit\n");
    printf("Enter your choice: ");

    scanf("%c", &input);
    scanf(" %c", &input2);

    printf("decimal value of input 2 is %d\n", input2);
    
    switch (input) {
        case 's':
        case 'S':
            printf("Starting game...\n");
            break;
        case 'l':
        case 'L':
            printf("Loading game...\n");
            break;
        case 'e':
        case 'E':
            printf("Quitting game...\n");
            break;
        default:
            printf("Invalid input.\n");
    }

    return 0;
}