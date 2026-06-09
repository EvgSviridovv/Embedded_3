#include <stdio.h>

void numbers(int n) {
   if (n >= 1) 
    {
        printf("%d ", n);
        numbers(n - 1);
    }
    
}

int main() {
    int a;
    scanf("%d", &a);
		numbers(a);
    return 0;
}
