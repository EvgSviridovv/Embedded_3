
#include <stdio.h>

int max_find(int max)
{
    int num;
    scanf("%d", &num);
    if (num == 0) 
		return max;  
    if (max < num)
	{
		max = num;		
	}
	return max_find(max);	 
}

int main() 
{
    int first;
    scanf("%d", &first);
    if (first == 0) 
    {
		printf("0");  
        return 0;
    }
    printf("%d\n", max_find(first));
    return 0;
   
}
