#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char infilename[20] = {};
    char outfilename[20] = {};

    FILE *IFH = NULL;
    FILE *OFH = NULL;

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
    char str[20] = { 0 };
    int ival = 0;
    float fval = 0;
    char cval = 0;

    fscanf(IFH, "%s %d %f %c", str, &ival, &fval, &cval);

    // Close the output file
    fclose(IFH);

    // Open the output file
    OFH = fopen(outfilename, "w+");

    if (OFH == NULL) {
        printf("Output file did not open...exiting\n");
        return 1;
    }

    // Use fprintf() to write to the file
    fprintf(OFH, "%s %d %f %c\n", str, ival + 1, fval + 2, cval + 3);

    // Close the file
    fclose(OFH);

    return 0;
}