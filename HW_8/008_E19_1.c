#include <stdio.h>

int main(void) {
    int a[24], i = 0;
    long long n;
    scanf("%lld", &n);
    if (n == 0) 
    {
        printf("0\n");
        return 0;
    }

    while (n > 0) 
    {
        a[i] = n % 10;  
        n /= 10;   
        i++;   
    }

    for (int j = i - 1; j >= 0; j--) 
    {
        printf("%d", a[j]);
        if (j > 0) 
        {
            printf(" "); 
        }
    }
    printf("\n"); 

    return 0;
}
