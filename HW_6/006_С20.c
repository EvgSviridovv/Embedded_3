#include <stdio.h>

int sum_sym(const char *str) 
{
    int sum = 0, pos = 0;
    while (str[pos] != '\0' && str[pos] != '.') 
    {  
        if (str[pos] == '(') 
			sum++;
        else if (str[pos] == ')') 
            sum --;
        if (sum < 0) 
            return 0;
        pos++;
    }
    return sum==0;
}      

int main() 
{
    char str[1000]; 
    int i = 0;
    while ((str[i] = getchar()) != '.') 
    {
        i++;
    }
  
    if (sum_sym(str)) 
        printf("YES");  
     else 
        printf("NO");   
     return 0;
}
