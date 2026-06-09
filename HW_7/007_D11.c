#include <stdio.h>

int count(int n) 
{
    if (n == 0)
        return 0;
    return (n % 2) + count(n / 2);
}

int main() 
{
    int n;
    scanf("%d", &n);
    printf("%d\n", count(n));
    return 0;
}
