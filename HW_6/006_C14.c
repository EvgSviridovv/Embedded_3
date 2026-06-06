#include <stdio.h>
int even(int a) 
{
	int temp_a, sum=0;
	temp_a = a;
	while (temp_a > 0) 
		{
			sum += temp_a % 10; 
			temp_a = temp_a / 10;
		}	
		if (sum % 2 ==0) 
		return 1;
		else 
		return 0;
		
	
}


int main(void)
{
	int a;
	scanf("%d",&a);
	if (a < 0) 
		printf("Нельзя вводить число меньше 0");
	else if(a==0) 
		printf("YES");
	else
		if (even(a))
			printf("YES");
		else 
			printf("NO");

	return 0;
}
