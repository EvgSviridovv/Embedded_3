#include <stdio.h>

int sum_numbers(int n) 
{
    if (n == 1) 
    {
        return 1;   
    }
    else 
    {
    return n + sum_numbers(n - 1); ;
    }
        //printf("%d ", n);

}

int main() {
    int a,sum;
    scanf("%d", &a);
		sum = sum_numbers(a);
	printf("%d ", sum);	
    return 0;
}

