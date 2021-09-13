#include <stdio.h>

float min(float, float, float, float, float);
float max(float, float, float, float, float);
float mean(float, float, float, float, float);

int main() {
    float a = 0, b = 0, c = 0, d = 0, e = 0;

    printf("Enter 5 numbers: ");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);

    float min_val = min(a, b, c, d, e);
    float max_val = max(a, b, c, d, e);
    float mean_val = mean(a, b, c, d, e);

    printf("The smallest value is %f\n", min_val);
    printf("The largest value is %f\n", max_val);
    printf("The mean value is %f\n", mean_val);

    return 0;
}

float min(float a, float b, float c, float d, float e) {
    float min_val = a;

    if (b < min_val) {
        min_val = b;
    }
    if (c < min_val) {
        min_val = c;
    }
    if (d < min_val) {
        min_val = c;
    }
    if (e < min_val) {
        min_val = e;
    }

    return min_val;
}

float max(float a, float b, float c, float d, float e) {
    float max_val = a;

    if (b > max_val) {
        max_val = b;
    }
    if (c > max_val) {
        max_val = c;
    }
    if (d > max_val) {
        max_val = d;
    }
    if (e > max_val) {
        max_val = e;
    }

    return max_val;
}

float mean(float a, float b, float c, float d, float e) {
    return (a + b + c + d + e) / 5;
}
