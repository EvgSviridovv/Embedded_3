#include <stdio.h>

int sum_digits(int n) 
{
    if (n == 0) 
    {
        return 0;  
    } 
    else 
    {
        return (n % 10) + sum_digits(n / 10);  
    }
}

int main() {
    int a, sum;
    scanf("%d", &a);
    sum = sum_digits(a);  
    printf("%d\n", sum);  
    return 0;
}
