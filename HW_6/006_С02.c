#include <stdio.h>
int power(int n, int p)
{
    long long result = 1;
    for (int i = 0; i < p; i++) {
        result *= n;
    }
    return result;
}

int main() 
{
    int a,b;
    scanf("%d%d",&a,&b);
    if ((a>=-1000) && (a <=1000) && (b>=0))
    printf("%d", power(a,b));
    return 0;
}   
    
