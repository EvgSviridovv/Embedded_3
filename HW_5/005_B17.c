
#include <stdio.h>

int main() {
    int a,i,num, sum, comp;
    scanf("%d", &a);
    if  (a <= 10)
		return 0;
    for (i=10; i<=a; i++) 
    {
        sum = 0;
        comp = 1;
        num = i;
        while (num>0) 
        {
			sum +=  num%10;
			comp *= num%10;
			num = num/10;
		}
		if (sum == comp) 
			printf("%d ", i);
    }
 
    return 0;
}
