#include <stdio.h>
#include <stdlib.h>

int is_two_same(int size, int a[])
{
	for (int i = 0; i < size - 1; i++) 
        for (int j = i + 1; j < size; j++) 
            if (a[i] == a[j]) 
                return 1; 
     return 0;
}


int main(void) 
{
	int *arr = NULL, num, size = 0, capacity = 10, answer;
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
 		answer = is_two_same(size, arr);
 		if (answer == 1)
 		printf("YES"); 
 		else 
 		printf("NO"); 
 		
}
