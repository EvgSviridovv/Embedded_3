
#include <stdio.h>
 int is_happy_number(int num)
{
	int sum = 0; int comp = 1;
	while (num>0) 
        {
			sum +=  num%10;
			comp *= num%10;
			num = num/10;
		}
		if (sum == comp) 
			return 1;
		else 
			return 0;	
}



int main() 
{
    int a;
    scanf("%d", &a);
    if  (is_happy_number(a))
		printf("YES");
	else
		printf("NO");
    return 0;
}
