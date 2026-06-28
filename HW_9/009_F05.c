#include <stdio.h>
#include <stdlib.h>

int find_max_array(int size, int a[])
{
	int max, i;
    max = a[0];
	for (i = 1; i < size; i++) 
	{	
		if (a[i] > max)
		{ 
			max = a[i];
		}
	}
	return max;
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
 		printf("%d ", find_max_array(size, arr)); 
}
