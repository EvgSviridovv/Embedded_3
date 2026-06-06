#include <stdio.h>
#include <math.h>

float sinus(float x) {
    float term = x, sum = x;
    int n = 1;
    
    while (fabs(term) > 0.001) {
        term = -term * x * x / ((2 * n) * (2 * n + 1));
        sum += term;
        n++;
    }
    return sum;
}

int main() {
    float x;
    scanf("%f", &x);
    x = x * M_PI / 180.0;  // переводим градусы в радианы
    printf("%.3f\n", sinus(x));
    return 0;
}
