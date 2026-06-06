#include <stdio.h>

int main() {
    int num, odd_digit, even_digit,temp_digit;
    scanf("%d", &num);
    if (num == 0) {
        printf("%d%d", 1, 0);
        return 0;
    }
	odd_digit = 0;  
    even_digit = 0; 
    while (num > 0) 
    {
        temp_digit = num % 10;  
        if (temp_digit % 2 == 0) 
			even_digit++;
		else 
			odd_digit++;
        num = num / 10;      
    }
    printf("%d %d",even_digit, odd_digit);
    return 0;
}
