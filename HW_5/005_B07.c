#include <stdio.h>

int main(void)
{
	int a, a_1, prev_digit1, last_digit,otvet;
	scanf("%d",&a);
	if (a <= 0) 
		printf("NO");
	else
	{
		otvet = 0;
        while (a > 0) 
        {
           prev_digit1 = a % 10; 
           while (a_1 > 0) 
			{
				last_digit = a_1 % 10; 
				if (prev_digit1 == last_digit) 
				{	
					otvet =1;
					break;
				}
				a_1 = a_1/10;
			}
			if (otvet ==1) 
				break;
			a = a/10;
        }
        if (otvet ==1) 
			printf("YES");
		else 
			printf("NO");
	}
	return 0;
}
