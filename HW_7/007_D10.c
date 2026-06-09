
#include <stdio.h>

int is_prime(int n, int d) 
{
   if (n == 1)
		return 0;
    else if (d * d > n)
		return 1; 
	else if (n % d > 0) 
		return is_prime(n, d + 1);
	else
		return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    printf(is_prime(n, 2) ? "YES\n" : "NO\n");
    return 0;
}
