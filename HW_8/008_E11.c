#include <stdio.h>

int main(void) {
    int a[10], i, j, min, i_min, temp;

    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for (j = 0; j < 9; j++) {
        min = a[j] % 10;
        i_min = j;

        for (i = j + 1; i < 10; i++) {
            if (a[i] % 10 < min) {
                min = a[i] % 10;
                i_min = i;
            }
        }

        if (i_min != j) {
            temp = a[j];
            a[j] = a[i_min];
            a[i_min] = temp;
        }
    }

    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
