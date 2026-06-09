#include <stdio.h>

void numbers(int n) {
   if (n > 1) 
    {
        numbers(n - 1);
    }
     printf("%d ", n);
}

int main() {
    int a;
    scanf("%d", &a);
		numbers(a);
    return 0;
}
