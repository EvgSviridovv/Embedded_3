#include <stdio.h>
#include <stdlib.h>

void sort_even_odd(int n, int a[])
{
    int i, j,  temp;
    for (j = 0; j < n - 1; j++) 
    {
        if ((a[j]% 2) == 0)
        continue;
        else
        for (i = j + 1; i < n; i++) 
        {
            if ((a[i] % 2)== 0) 
            {
                temp = a[j];
				a[j] = a[i];
				a[i] = temp;
            }
        }
    }
    for (i = 0; i < n; i++) 
		printf("%d ", a[i]); 
}


int main(void) 
{
	int *b = NULL, num, size = 0, capacity = 10;
	b = malloc(capacity * sizeof(int));
    while (scanf("%d", &num) == 1) 
    {
        b[size++] = num;
    }
 	sort_even_odd(size, b);
}
