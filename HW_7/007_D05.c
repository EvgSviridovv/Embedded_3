#include <stdio.h>

void print_num(int num) 
{
    if (num > 0) 
    {
        print_num(num / 2); 
        printf("%d", num % 2); 
    }
}

int main() {
    int a;
    scanf("%d", &a);
    if (a==0)
		printf("00000000");
    print_num(a);  
    return 0;
}
