#include <stdio.h>

int main() 
{
    int a[10],i;
    int min, i_min, max, i_max;
    for (i = 0; i < 10; i++) 
		scanf("%d", &a[i]);
	min = a[0];
	max = a[0];
	i_min = 0; 
	i_max = 0;   
	for (i = 1; i < 10; i++) 
	{	
		if (a[i] > max)
		{ 
			max = a[i];
			i_max = 1;
		}
		if (a[i] < min)
		{ 
			min = a[i];
			i_min = 1;
		}	
	}
    printf("%d %d %d %d",i_max, max, i_min, min);
    return 0;
}
