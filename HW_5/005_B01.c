#include <stdio.h>

int main(void)
{
	int a,i;
	scanf("%d",&a);
	if (a<=100) 
	{
		for(i=1;i<=a;i++)
		{
			printf("%d %d% d\n",i,i*i,i*i*i);
		}
	}
	else 
		printf("Нельзя вводить число больше 100");
	return 0;
}
