#include <stdio.h>

int trace(int n, int mat[][5]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += mat[i][i];
    }
    return sum;
}

int main() {
    const int N = 5;
    int mat[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("%d\n", trace(N, mat));
    return 0;
}
