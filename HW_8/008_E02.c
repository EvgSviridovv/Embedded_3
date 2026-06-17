#include <stdio.h>

int main() 
{
    int a[5] = {0};
    int i,m;
   // float s=0;
    for (i = 0; i < 5; i++) 
		scanf("%d", &a[i]);
	m = a[0]; 
	for (i = 1; i < 5; i++) 
		if (a[i] < m) 
			m = a[i];
    printf("%d", m);
    return 0;
}
