#include <stdio.h>

int main() 
{
    int a[12], i, temp;
    for (i = 0; i < 12; i++) 
        scanf("%d", &a[i]);
    for (i = 0; i < 2; i++) 
    {
        temp = a[i];
        a[i] = a[3 - i];
        a[3 - i] = temp;
    }
    for (i = 0; i < 2; i++) 
    {
        temp = a[4 + i];
        a[4 + i] = a[7 - i];
        a[7 - i] = temp;
    }
    for (i = 0; i < 2; i++) 
    {
        temp = a[8 + i];
        a[8 + i] = a[11 - i];
        a[11 - i] = temp;
    }
    for (i = 0; i < 12; i++) 
        printf("%d ", a[i]);
    return 0;
}
