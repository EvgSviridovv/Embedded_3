#include <stdio.h>
#include <stdlib.h>

void change_max_min(int size, int a[])
{
	int i, min, i_min, max, i_max, temp;
		if (a[0] < a[1]) 
        {
			min = a[0]; 
			i_min = 0; 
			max = a[1];
			i_max = 1;  
	    } 
	    else 
	    {
			min = a[1];
			i_min = 1;
			max = a[0];
			i_max = 0;
	    }
		for (i = 2; i < size; i++) 
		{
			if (a[i] < min) 
			{
				min = a[i]; 
				i_min = i;
			} 
			else if (a[i] > max) 
			{
			  max = a[i];
			  i_max = i;
			}
		}      
    if (i_min != i_max)
		{
			temp = min;
			a[i_min] = max;
			a[i_max] = temp;
		}
	//for (i = 0; i < size; i++) 
	//			printf("%d ", a[i]);
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
 	change_max_min(size, arr); 		
}
