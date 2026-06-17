#include <stdio.h>

int main() {
    int a[10];
    int i,j,n;
    int count,max;
    for (i = 0; i < 10; i++) 
        scanf("%d", &a[i]);
    max = 1;
    for (j = 0; j < 10; j++) 
    {
		count = 0;
		for (i = 0; i < 10; i++) 
		{
			if (a[i] == a[j])
				count++;
		}
		if (count > max) 
		{
			max = count;
			n = a[j];
		}

	}
		printf("%d ", n);

    return 0;
}
