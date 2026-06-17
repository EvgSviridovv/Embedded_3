#include <stdio.h>

int main() 
{
    int a[12] = {0};
    int i;
    float s=0;
    for (i = 0; i < 12; i++) 
    scanf("%d", &a[i]);
	for (i = 0; i < 12; i++) 
    s = s + a[i];
    printf("%.2f", s/12);
    return 0;
}
