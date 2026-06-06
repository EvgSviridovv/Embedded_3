#include <stdio.h>

int main() {
    int num, min_digit, max_digit, temp_digit;
    scanf("%d", &num);
    if (num == 0) {
        printf("%d%d", num, num);
        return 0;
    }
	min_digit = num % 10;  
    max_digit = num % 10; 
    while (num > 0) 
    {
        temp_digit = num % 10;  
        if (max_digit < temp_digit)
			max_digit = temp_digit;
		if (min_digit > temp_digit)
			min_digit = temp_digit;	
        num = num / 10;      
    }
    printf("%d %d", min_digit, max_digit);
    return 0;
}
