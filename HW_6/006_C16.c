#include <stdio.h>

int is_primef(int num) {
    if (num < 2) {
        return 0;
    } else if (num == 2) {
        return 1;
    } else if (num % 2 == 0) {
        return 0;
    } else {
        for (int i = 3; i * i <= num; i += 2) {
            if (num % i == 0) {
                return 0;  
            }
        }
        return 1;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    if (is_primef(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
        
    
