#include <stdio.h>

int main(void) 
{
    int a[24], i, j, ost;
	long long n;
	scanf("%lld", &n);
    if (n == 0) 
    {
        printf("0\n");
        return 0;
    }
    ost = n % 10;
    i = 0;
    a[i] = ost;
    while (n/10 > 0 ) 
    {
		i++;
		ost = n/10;
		a[i] = n % 10;
	}
    for (j = i-1; j >= 0; j--)
        printf("%d ", a[j]);
    return 0;
}
