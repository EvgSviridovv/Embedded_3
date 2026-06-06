#include <stdio.h>

int main() {
    int num, is_prime = 1;
    scanf("%d", &num);
    if (num < 2) 
    {
        is_prime = 0;
    } 
    else if (num == 2) 
    {
        is_prime = 1;
    } 
    else if (num % 2 == 0) 
    {
        is_prime = 0;
    } 
    else 
    {
        for (int i = 3; i * i <= num; i += 2) 
        {
            if (num % i == 0) 
            {
                is_prime = 0;
                break;
			}
        }
    }
    if (is_prime ==1) 
        printf("YES");
    else 
        printf("NO");
    return(0);
}
        
    
