#include <stdio.h>
#include <stdlib.h>

void sort_even_odd(int n, int a[])
{
	int *temp = malloc(n * sizeof(int));
    int idx = 0, i;
    for (i = 0; i < n; i++) 
        if (a[i] % 2 == 0) 
            temp[idx++] = a[i];
    for (int i = 0; i < n; i++)
        if (a[i] % 2 != 0)
            temp[idx++] = a[i];
    for (int i = 0; i < n; i++) 
    {
        a[i] = temp[i];
       // printf("%d ", a[i]); 
	}
    free(temp);
  
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
 	sort_even_odd(size, arr);
 	for (int i = 0; i < size; i++) 
		printf("%d ", arr[i]); 
}
