#include <stdio.h>

int main() {
    int a[10], i, temp;
    
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5 / 2; i++) 
    {
        temp = a[i];
        a[i] = a[4 - i];
        a[4 - i] = temp;
    }
    for (i = 0; i < 5 / 2; i++) 
    {
        temp = a[5 + i];
        a[5 + i] = a[9 - i];
        a[9 - i] = temp;
    }
   for (i = 0; i < 10; i++) 
       printf("%d ", a[i]);
    printf("\n");
    return 0;
}
