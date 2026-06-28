#include <stdio.h>
#include <stdlib.h>

int sum_between_ab(int from, int to, int size, const int a[]) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] >= from && a[i] <= to) {
            sum += a[i];
        }
    }
    return sum;
}

int main(void) {
    int *arr = NULL;
    int num, size = 0, capacity = 10;

    arr = malloc(capacity * sizeof(int));
    if (arr == NULL) {
        return 1;
    }

    while (scanf("%d", &num) == 1) {
        arr[size++] = num;
        if (size >= capacity) {
            capacity *= 2;
            int *new_arr = realloc(arr, capacity * sizeof(int));
            if (new_arr == NULL) {
                free(arr);
                return 1;
            }
            arr = new_arr;
        }
    }


    if (size < 2) {
        free(arr);
        return 1;
    }

    int from = arr[0];
    int to = arr[1];

 
    int array_size = size - 2;
    const int *array_start = arr + 2;  

    int result = sum_between_ab(from, to, array_size, array_start);
    printf("%d\n", result);

    free(arr);
    return 0;
}
