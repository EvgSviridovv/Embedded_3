#include <stdio.h>
int grow_up(int num)
{
	 int last_digit, prev_digit;
	 int has_increasing = 1; 
	 prev_digit = -1;
     while (num > 0) 
     {
        last_digit = num % 10;  
        if (prev_digit != -1 && prev_digit <= last_digit) 
        {
            has_increasing = 0;  
            break;
        }
        prev_digit = last_digit; 
        num = num / 10;  
     }	
     return  has_increasing; 
}

int main() 
{
   int n;
    scanf("%d", &n);
    if (n == 0) 
    {
        printf("YES");
        return 0;
    }
    if (grow_up(n)) 
        printf("YES");
     else 
        printf("NO");
    
    return 0;
}
