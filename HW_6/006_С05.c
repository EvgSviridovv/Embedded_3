#include <stdio.h>
#define MAX_SIZE 100
long sum(int n) 
{
    int sum = 0;
    for (int i = 1; i <= n; i++) 
    {
        sum += i;
    }
    return sum;
}


int main() {
    int num;
    scanf("%d", &num);
    printf("%ld",sum(num));
    return 0;
}

   
   
