#include <stdio.h>

int main(void)
{
	int a,b,i;
	scanf("%d%d",&a,&b);
	if ((a<=100) && (b<=100) &&(a <= b))
	{
		for(i=a;i<=b;i++)
		{
			printf("%d ",i*i);
		}
	}
	else 
		printf("Нельзя вводить число больше 100");
	return 0;
}
