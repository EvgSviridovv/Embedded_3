#include <stdio.h>

int main() 
{
    int a[12] = {0};
    int i = 8, t;
    printf("%d\n", i);
	a[i++] = 12;
	for (t=0;t<12;t++)
	{  
		printf("%d  ", a[t]);
    }
    printf("%d\n", i);
    return 0;
}
