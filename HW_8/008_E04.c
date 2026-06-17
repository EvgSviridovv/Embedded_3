#include <stdio.h>

int main() {
    int a[10];
    int i;
	int max1, max2; 
    for (i = 0; i < 10; i++) 
        scanf("%d", &a[i]);
      if (a[0] > a[1]) 
      {
        max1 = a[0];  
        max2 = a[1];  
	   } 
	   else 
	   {
        max1 = a[1];
        max2 = a[0];
	    }
    for (i = 2; i < 10; i++) 
    {
        if (a[i] > max1) 
        {
            max2 = max1;  
            max1 = a[i]; 
        } 
        else if (a[i] > max2) 
          max2 = a[i];     
    }
    printf("%d\n", max1 + max2);
    return 0;
}
