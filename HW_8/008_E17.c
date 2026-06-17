#include <stdio.h>

int main() {
    int a[10];
    int i,j;
    int count;
    for (i = 0; i < 10; i++) 
        scanf("%d", &a[i]);
    for (j = 0; j < 10; j++) 
    {
		count = 0;
		for (i = 0; i < 10; i++) 
		{
			if (a[i] == a[j])
				count++;
		}
		if (count == 1)
		printf("%d ", a[j]);
	}


    return 0;
}
