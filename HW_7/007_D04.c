#include <stdio.h>

void print_num(int num) 
{
    if (num > 0) 
    {
        print_num(num / 10); 
        printf("%d ", num % 10); 
    }
}

int main() {
    int a;
    scanf("%d", &a);
    if (a==0)
		printf("%d ", a);
    print_num(a);  
    return 0;
}
