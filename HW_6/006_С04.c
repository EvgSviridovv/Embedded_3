#include <stdio.h>
#define MAX_SIZE 100
long f(int x) 
{
    if (x < -2) return 4;
    else if (x >= 2) return x * x + 4 * x + 5;
    else return x * x;
}

long max(long values[], int n) 
{
    long max_val = values[0];
    for (int j = 1; j < n; j++) 
    {
        if (values[j] > max_val) max_val = values[j];
    }
    return max_val;
}

int main() {
    int num[MAX_SIZE], count = 0;
    long f_num[MAX_SIZE];
    while (1) 
    {
        scanf("%d", &num[count]);
        if (num[count] == 0) break;
        count++;
    }
	for (int i = 0; i < count; i++) 
	{
		f_num[i] = f(num[i]);
		//~ printf("%d ", num[i]);
		//~ printf("%ld \n", f_num[i]);
    }

    long max_result = max(f_num, count);
    printf("%ld", max_result);
    
    return 0;
}

   
   
