#include <stdio.h>
#include <stdlib.h>

void two_min(int size, int a[])
{
	int i, min1, i_min1, min2, i_min2;
		if (a[0] < a[1]) 
        {
			min1 = a[0]; 
			i_min1 = 0; 
			min2 = a[1];
			i_min2 = 1;  
	    } 
	    else 
	    {
			min1 = a[1];
			i_min1 = 1;
			min2 = a[0];
			i_min2 = 0;
	    }
		for (i = 2; i < size; i++) 
		{
			if (a[i] < min1) 
			{
				min2 = min1;
				i_min2 = i_min1;  
				min1 = a[i]; 
				i_min1 = i;
			} 
			else if (a[i] < min2) 
			{
			  min2 = a[i];
			  i_min2 = i;
			}
		}      
    if (i_min2 < i_min1)
		printf("%d %d\n", i_min2, i_min1);
	else
		printf("%d %d\n", i_min1, i_min2);
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
 	two_min(size, arr); 		
}
