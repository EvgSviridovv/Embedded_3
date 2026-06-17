
#include <stdio.h>

int main(void) 
{
    int N;
    scanf("%d", &N);

    int count[8] = {0};

    for (int num = 2; num <= N; num++) 
    {
        for (int divisor = 2; divisor <= 9; divisor++) 
        {
            if (num % divisor == 0) 
                count[divisor - 2]++;
        }
    }

    for (int divisor = 2; divisor <= 9; divisor++) 
        printf("%d %d ", divisor, count[divisor - 2]);
    printf("\n");

    return 0;
}



