#include <stdio.h>
#include <math.h>

float cosinus(float x) {
    float term = 1, sum = 1;
    int n = 1;

    while (fabs(term) > 0.001) {
        term = -term * x * x / ((2 * n - 1) * (2 * n));
        sum += term;
        n++;
    }
    return sum;
}

int main() {
    int deg;
    float x;
    scanf("%d", &deg);
    x = deg * M_PI / 180.0;
    printf("%.3f\n", cosinus(x));
    return 0;
}
