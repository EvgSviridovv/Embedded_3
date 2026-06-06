#include <stdio.h>

int main() {
    int num,sum;
   
    scanf("%d", &num);
    if (num == 0) {
        printf("NO");
        return 0;
    }
	sum = 0;
    while (num > 0) 
    {
        sum += num % 10;  
        num = num / 10;  
    }
	if (sum == 10 )
        printf("YES");
    else 
        printf("NO");
		

    return 0;
}
