#include <stdio.h>
#include <stdlib.h>

void sort_even_odd(int n, int a[])
{
    int left = 0, right = n - 1,i;
    while (left < right) {
        if (a[left] % 2 == 0) left++;
        else {
            int temp = a[left];
            a[left] = a[right];
            a[right] = temp;
            right--;
        }
    }
    for (i = 0; i < n; i++) 
	printf("%d ", a[i]); 
    //~ int i, j,  temp;
    //~ for (j = 0; j < n - 1; j++) 
    //~ {
        //~ if ((a[j]% 2) == 0)
        //~ continue;
        //~ else
        //~ for (i = j + 1; i < n; i++) 
        //~ {
            //~ if ((a[i] % 2)== 0) 
            //~ {
                //~ temp = a[j];
				//~ a[j] = a[i];
				//~ a[i] = temp;
            //~ }
        //~ }
    //~ }
    //~ for (i = 0; i < n; i++) 
		//~ printf("%d ", a[i]); 
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
}
