
#include <stdio.h>

void print_divisor(int n, int divisor) {
    if (n == 1) 
    {
        return;  
    }
    
    if (n % divisor == 0) 
    {
        printf("%d ", divisor);  
        print_divisor(n / divisor, divisor); 
    } 
    else 
    {
        print_divisor(n, divisor + 1);  
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
    print_divisor(n, 2);  
    return 0;
}
