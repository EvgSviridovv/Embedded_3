
#include <stdio.h>

void sequence(int n, int current, int count, int total) 
{
    if (total >= n) 
    return;
    if (count < current) 
    {
        printf("%d ", current);
        sequence(n, current, count + 1, total + 1);
    } 
    else 
    {
        sequence(n, current + 1, 0, total);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    sequence(n, 1, 0, 0);
    return 0;
}
