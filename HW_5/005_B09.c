#include <stdio.h>

int main() {
    int num,digit;
    int odd_count;  
      


	odd_count = 0;
    scanf("%d", &num);
    if (num == 0) {
        printf("YES");
        return 0;
    }

    while (num > 0) 
    {
        digit = num % 10;  
        if ((digit % 2) != 0) 
            odd_count++;
        num = num / 10;  
    }
    if (odd_count == 0) 
        printf("YES");
    else {
        printf("NO");
    }

    return 0;
}
