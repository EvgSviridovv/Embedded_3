#include <stdio.h>

int main() {
    int a[10], result[10];
    int i, res_count = 0;

    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < 10; i++) {
        int num = a[i] < 0 ? -a[i] : a[i];  // работаем с модулем числа
        if (num >= 10 && (num / 10) % 10 == 0)
            result[res_count++] = a[i];
    }

    for (i = 0; i < res_count; i++)
        printf("%d ", result[i]);
    printf("\n");

    return 0;
}
