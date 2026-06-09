#include <stdio.h>

void print_odd_numbers() {
    int num;
    scanf("%d", &num);  
    if (num == 0) 
    {
        return;  
    }
    if (num % 2 != 0)
    {  
        printf("%d ", num);  
    }
    print_odd_numbers();
}

int main() 
{
    print_odd_numbers();  
    return 0;
}
