#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char infilename[20] = {};
    char outfilename[20] = {};

    FILE *IFH = NULL;
    FILE *OFH = NULL;

    // Prompt the user to enter a file name
    printf("Enter a filename: ");
    scanf("%s", infilename);
    IFH = fopen(infilename, "r+");

    if (IFH == NULL) {
        printf("Input file did not open...exiting\n");
        return 1;
    }

    // Read the first line
    fscanf(IFH, "%s", outfilename);

    // Read multiple values from the second line using fscanf
    int ival1 = 0, ival2 = 0, ival3 = 0;

    fscanf(IFH, "%d %d %d", &ival1, &ival2, &ival3);

    // Close the output file
    fclose(IFH);

    // Open the output file
    OFH = fopen(outfilename, "w+");

    if (OFH == NULL) {
        printf("Output file did not open...exiting\n");
        return 1;
    }

    // Use fprintf() to write to the file
    fprintf(OFH, "%d %d %d\n", ival1 + 1, ival2 + 2, ival3 + 3);

    // Close the file
    fclose(OFH);

    return 0;
}