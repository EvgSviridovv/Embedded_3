#include <stdio.h>

void swap_negmax_last(int size, int a[]) {
    if (size == 0) return;
    int max_neg = -2147483648;
    int idx = -1;
    for (int i = 0; i < size; i++) {
        if (a[i] < 0 && a[i] > max_neg) {
            max_neg = a[i];
            idx = i;
        }
    }

    if (idx != -1) {
        int temp = a[idx];
        a[idx] = a[size - 1];
        a[size - 1] = temp;
    }
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int arr[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    swap_negmax_last(n, arr);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
