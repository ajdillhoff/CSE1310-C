#include <stdio.h>

int main() {
    char filename[100];
    char new_filename[100];
    FILE *fp = fopen("input.txt", "r+");

    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Load filename from file along with raw data on second line
    char name[100];
    int hp = 0;
    int ac = 0;
    double cr = 0;

    fscanf(fp, "%s", new_filename);
    fscanf(fp, "%s %d %d %lf", name, &hp, &ac, &cr);

    printf("Filename: %s\n", new_filename);
    printf("Name: %s\n", name);
    printf("HP: %d\n", hp);
    printf("AC: %d\n", ac);
    printf("CR: %.1lf\n", cr);

    fclose(fp);

    return 0;
}