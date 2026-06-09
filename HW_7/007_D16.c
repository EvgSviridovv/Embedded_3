
#include <stdio.h>

int is2pow(int n) 
{
    if (n == 1) {
        return 1; 
    }
    if (n % 2 != 0 || n < 1) {
        return 0; 
    }
    return is2pow(n / 2);
}
int main() 
{
    int num;
    scanf("%d", &num);
    if (is2pow(num)) 
		printf("YES");
	else 
		printf("NO");
    return 0;
   
}
