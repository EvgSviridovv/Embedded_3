#include <stdio.h>

double avg_main_diag(int n, int mat[][5]) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += mat[i][i];
    }
    return (double)sum / n;
}

int main() {
    const int N = 5;
    int mat[N][N];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &mat[i][j]);
        }
    }

    double avg = avg_main_diag(N, mat);
    int count = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (mat[i][j] > 0 && mat[i][j] > avg) {
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
