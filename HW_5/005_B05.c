#include <stdio.h>

int main(void)
{
	int a,temp_a,sum=0;
	scanf("%d",&a);
	if (a < 0) 
		printf("Нельзя вводить число меньше 0");
	else if(a==0) 
		printf("%d",a);
	else
	{
		temp_a = a;
        while (temp_a > 0) 
        {
            sum += temp_a % 10; 
            temp_a = temp_a / 10;
            
        }
		printf("%d",sum);
	}
	return 0;
}
