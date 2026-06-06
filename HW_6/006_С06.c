#include <stdio.h>
unsigned long long int sum(int n) 
{
    unsigned long long int sum = 1;
    for (int i = 1; i < n; i++) 
    {
        sum *= 2;
      //  printf("%lld \n", sum);
    }
    return sum;
}


int main() {
    int num;
    scanf("%d", &num);
    printf("%llu",sum(num));
    return 0;
}

   
   
