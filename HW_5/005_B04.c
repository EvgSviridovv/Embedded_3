#include <stdio.h>

int main(void)
{
	int a,temp,count = 0;
	scanf("%d",&a);
	if (a > 0) 
	{
		temp = a;
        while (temp > 0) 
        {
            temp = temp / 10;
            count++;
        }
		if (count==3) 
			printf("YES");
		else 
			printf("NO");
	}
	else 
		printf("Нельзя вводить число больше 100");
	return 0;
}
