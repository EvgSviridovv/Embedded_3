#include <stdio.h>
#include <string.h>

#define MAX_LEN 1001

void build_max_palindrome(char *s) {
    int count[26] = {0};
    for (int i = 0; s[i]; i++)
        count[s[i] - 'a']++;

    char left[MAX_LEN];
    int len = 0, center = 0;

    for (int c = 0; c < 26; c++) {
        for (int k = 0; k < count[c] / 2; k++)
            left[len++] = 'a' + c;
        if (count[c] % 2 && !center)
            center = 'a' + c;
    }

    int idx = 0;
    for (int i = 0; i < len; i++)
        s[idx++] = left[i];
    if (center)
        s[idx++] = center;
    for (int i = len - 1; i >= 0; i--)
        s[idx++] = left[i];
    s[idx] = '\0';
}

int main() {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    if (!fin || !fout) return 1;

    char s[MAX_LEN];
    fgets(s, sizeof(s), fin);
    size_t l = strlen(s);
    if (l > 0 && s[l - 1] == '\n') s[l - 1] = '\0';

    build_max_palindrome(s);
    fprintf(fout, "%s\n", s);

    fclose(fin);
    fclose(fout);
    return 0;
}
