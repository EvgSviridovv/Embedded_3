#include <stdio.h>

int main() {
    int n = 5;
    int a[5][5];
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int sum_diag = 0;
    for (int i = 0; i < n; i++) {
        sum_diag += a[i][i];
    }

    double avg = (double)sum_diag / n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > 0 && a[i][j] > avg) {
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
