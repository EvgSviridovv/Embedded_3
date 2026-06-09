#include <stdio.h>

void print_range(int a, int b) 
{
    printf("%d ", a);
    
    if (a < b) 
    {
        if (a + 1 <= b) 
        {
            print_range(a + 1, b);
        }
    } 
    else if (a > b) 
    {
        if (a - 1 >= b) 
        {
            print_range(a - 1, b);
        }
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    print_range(a, b);
    return 0;
}
