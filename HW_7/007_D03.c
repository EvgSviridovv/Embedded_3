#include <stdio.h>

void digits(int n) 
{
    if (n > 0) 
    {
        printf("%d ", n % 10);
        digits(n / 10);  
    }
}

int main() {
    int a;
    scanf("%d", &a);
    if (a==0)
		printf("%d ", a);
    digits(a);  
    return 0;
}
