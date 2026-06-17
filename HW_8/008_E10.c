#include <stdio.h>
int main() {
    int a[12], i, temp;
    
    for (i = 0; i < 12; i++)
        scanf("%d", &a[i]);
    for (int shift = 0; shift < 4; shift++) 
    {
        temp = a[11];
        for (i = 11; i > 0; i--) {
            a[i] = a[i-1];
        }
        a[0] = temp;
    }
   for (i = 0; i < 12; i++) 
        printf("%d ", a[i]);
   return 0;
}
