#include <stdio.h>

void print_simple(int n) {
    int div = 2;
    while (div * div <= n) {
        while (n % div == 0) {
            printf("%d ", div);
            n /= div;
        }
        div++;
    }
    if (n > 1) {
        printf("%d", n);
    }
}

int main() {
    int num;
    scanf("%d", &num);
    print_simple(num);
    printf("\n");
    return 0;
}
   
   
