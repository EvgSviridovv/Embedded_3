#include <stdio.h>

int main() 
{
    int a[10],b[10],c[10];
    int i, pos_count = 0, neg_count = 0;
    for (i = 0; i < 10; i++) 
        scanf("%d", &a[i]);
   
   	for (i = 0; i < 10; i++) 
		{
			if (a[i] > 0)
			{
				b[pos_count] = a[i];
				pos_count++;
			}
			
			else if (a[i] < 0)
			{
				c[neg_count] = a[i];
				neg_count++;
			}
		}
		for (i = 0; i < pos_count; i++) 
			printf("%d ", b[i]);
		for (i = 0; i < neg_count; i++) 
			printf("%d ", c[i]);
    return 0;
}
