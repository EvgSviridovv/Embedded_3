#include <stdio.h>

int main() {
    int a[10];
    int i;
    int sum;
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    sum = 0; 
    for (i = 0; i < 10; i++) 
    {
        if (a[i] > 0) 
      
            sum += a[i];
          
    }
    printf("%d\n", sum);

    return 0;
}
