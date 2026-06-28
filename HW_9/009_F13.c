#include <stdio.h>
#include <stdlib.h>
int count_between(int from, int to, int size, int a[]) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] >= from && a[i] <= to) {
            count++;
        }
    }
    return count;
}

int main(void) 
{
	int *arr = NULL, num, size = 0, capacity = 10;
	arr = malloc(capacity * sizeof(int));
    while (scanf("%d", &num) == 1) 
    {
        arr[size++] = num;
		if (size >= capacity) 
		{
            capacity *= 2;
            arr = realloc(arr, capacity * sizeof(int));
            if (arr == NULL) 
            {
                free(arr);
                return 1;
            }
        }
    }
 	count_between(3,6,size, arr); 		
}
