#include <stdio.h>
#include <stdlib.h>

int sum_between_ab(int from, int to, int size, int a[]) 
{
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] >= from && a[i] <= to) {
            sum += a[i];
        }
    }
    return sum;
}

int main(void) {
    int from, to, size;
    if (scanf("%d %d %d", &from, &to, &size) != 3) 
    {
        return 1;
    }

    int *a = malloc(size * sizeof(int));
    if (a == NULL) {
        return 1;
    }

    for (int i = 0; i < size; i++) {
        if (scanf("%d", &a[i]) != 1) {
            free(a);
            return 1;
        }
    }

    int result = sum_between_ab(from, to, size, a);
    printf("%d\n", result);

    free(a);
    return 0;
}
