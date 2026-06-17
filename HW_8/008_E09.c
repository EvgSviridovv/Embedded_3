#include <stdio.h>

int main() {
    int a[10], i, temp;
    for (i = 0; i < 10; i++) 
        scanf("%d", &a[i]);
    temp = a[9];
    for (i = 9; i > 0; i--) 
        a[i] = a[i-1];
    a[0] = temp;
    for (i = 0; i < 10; i++) 
        printf("%d ", a[i]);
    return 0;
}
