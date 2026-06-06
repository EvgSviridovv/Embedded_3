#include <stdio.h>

int main(void)
{
	int a,b,i,sum;
	scanf("%d%d",&a,&b);
	if ((a<=100) && (b<=100) &&(a <= b))
	{
		sum =0;
		for(i=a;i<=b;i++)
		{
			sum = sum + i*i;
		}
	}
	else 
		printf("Нельзя вводить число больше 100");
	printf("%d ",sum);
	return 0;
}
