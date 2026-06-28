#include <stdio.h>
#include <stdlib.h>
int sum_between_ab(int from, int to, int size, int a[])
 {
    int sum = 0;
    
    for (int i = 2; i < size; i++) 
    {
        if (a[i] >= from && a[i] <= to) 
            sum+=a[i];
    }
    return sum;
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
    
 printf("%d ", sum_between_ab(arr[0],arr[1],size, arr)); 		
}
