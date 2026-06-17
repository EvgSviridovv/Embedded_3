#include <stdio.h>

int main(void) 
{
    int a[24], i, j, k, max, j_max,ost,temp;
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
    while (n > 0 ) 
    {
		i++;
		n /= 10;
		a[i] = n % 10;
	}
    for (j = 0; j < i; j++) {
        max = a[j];
        j_max = j;

        for (k = j + 1; k < i+1; k++) 
        {
            if (a[k] > max) 
            {
                max = a[k];
                j_max = k;
            }
        }

        if (j_max != j) 
        {
            temp = a[j];
            a[j] = a[j_max];
            a[j_max] = temp;
        }
    }
     
    
    for (j = 0; j <= i-1; j++)
        printf("%d", a[j]);
    return 0;
}




