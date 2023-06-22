#include <stdio.h>

int main() {
    char input = 0;

    while (1) {
      printf("S - Start Game\n");
      printf("L - Load Game\n");
      printf("E - Exit\n");
      printf("Enter your choice: ");

      scanf("%c", &input);
      while (getchar() != '\n');

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
          return 0;
        default:
          printf("Invalid input.\n");
      }
    }

    return 0;
}