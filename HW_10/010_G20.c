#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1001

int is_palindrom(const char *s) {
    int count[26] = {0};
    int odd = 0;

    for (int i = 0; s[i]; i++) 
        if (islower(s[i])) 
           count[s[i] - 'a']++;
 
    for (int i = 0; i < 26; i++) 
        if (count[i] % 2 != 0) 
            odd++;
    return odd <= 1;
}

int main() 
{
    FILE *fin = fopen("input.txt", "r");
    if (!fin) return 1;

    char s[MAX_LEN];
    fgets(s, sizeof(s), fin);
    fclose(fin);

    if (is_palindrom(s)) 
        printf("YES\n");
    else 
        printf("NO\n");
   return 0;
}
