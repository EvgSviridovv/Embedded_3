#include <stdio.h>

int main() {
    int a[10], result[10];
    int i, j, count, res_count = 0, is_duplicate;

    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < 10; i++) {
        count = 0;
        for (j = 0; j < 10; j++) {
            if (a[j] == a[i])
                count++;
        }

        if (count > 1) {
            is_duplicate = 0;
            for (j = 0; j < res_count; j++) {
                if (result[j] == a[i]) {
                    is_duplicate = 1;
            break;
                }
            }
            if (!is_duplicate) {
                result[res_count++] = a[i];
            }
        }
    }

    for (i = 0; i < res_count; i++)
        printf("%d ", result[i]);
    printf("\n");

    return 0;
}
