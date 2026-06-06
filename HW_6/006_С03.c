#include <stdio.h>
int middle(int a, int b)
{
    return (a+b)/2;
}

int main() 
{
    int a,b;
    scanf("%d%d",&a,&b);
    if ((a>=0) && (b>=0))
    printf("%d", middle(a,b));
    return 0;
}   
    
