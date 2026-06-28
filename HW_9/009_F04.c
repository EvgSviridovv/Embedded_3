#include <stdio.h>

void print_digit(char s[]) 
{
    int cnt[10] = {0};
    for (int i = 0; s[i]; i++) 
        if (s[i] >= '0' && s[i] <= '9') 
            cnt[s[i] - '0']++;
    for (int d = 0; d < 10; d++) 
        if (cnt[d]) 
            printf("%d %d ", d, cnt[d]);
        
}

int main() {
    char s[10005];
    if (scanf("%[^\n]", s) == 1) 
        print_digit(s);
     return 0;
}
