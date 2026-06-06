#include <stdio.h>

int main() {
    int num, last_digit, prev_digit;
    int has_increasing = 1; 
    scanf("%d", &num);
    if (num == 0) {
        printf("YES");
        return 0;
    }
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
    if (has_increasing==1) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
