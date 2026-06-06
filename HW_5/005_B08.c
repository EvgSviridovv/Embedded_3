#include <stdio.h>

int main() {
    int num,digit;
    int digit_count = 9;  
      


	digit_count = 0;
    scanf("%d", &num);
    if (num == 0) {
        printf("NO");
        return 0;
    }

    while (num > 0) 
    {
        digit = num % 10;  
        if (digit == 9) 
        {
            digit_count++;
  
        }
        num = num / 10;  
    }

    if (digit_count == 1) 
        printf("YES");
    else {
        printf("NO");
    }

    return 0;
}
