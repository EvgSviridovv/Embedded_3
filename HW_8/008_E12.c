#include <stdio.h>

int main(void) {
    int a[10], i, j, min, max, i_min, i_max, temp;

    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for (j = 0; j < 5; j++) {
        min = a[j];
        i_min = j;
        for (i = j + 1; i < 5; i++) 
        {
            if (a[i] < min) 
            {
                min = a[i];
                i_min = i;
            }
        }

        if (i_min != j) 
        {
            temp = a[j];
            a[j] = a[i_min];
            a[i_min] = temp;
        }
    }
	for (j = 5; j < 10; j++) {
        max = a[j];
        i_max = j;

        for (i = j + 1; i < 10; i++) 
        {
            if (a[i] > max) 
            {
                max = a[i];
                i_max = i;
            }
        }

        if (i_max != j) 
        {
            temp = a[j];
            a[j] = a[i_max];
            a[i_max] = temp;
        }
    }

    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    return 0;
}
