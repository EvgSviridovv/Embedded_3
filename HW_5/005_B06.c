#include <stdio.h>

int main(void)
{
	int a, prev_digit, last_digit,otvet;
	scanf("%d",&a);
	if (a <= 0) 
		printf("NO");
	else
	{
		prev_digit = -1;
		otvet = 0;
        while (a > 0) 
        {
           last_digit = a % 10; 
           if (prev_digit == last_digit) 
			{	
				otvet =1;
				break;
			}
			a = a/10;
			prev_digit = last_digit; 
        }
        if (otvet ==1) 
			printf("YES");
		else 
			printf("NO");
	}
	return 0;
}
