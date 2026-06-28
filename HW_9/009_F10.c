#include <stdio.h>

int main() {
    char s[1005];
    scanf("%s", s);

    int i = 0;
    while (s[i] != '.') {
        char ch = s[i];
        int count = 0;
        while (s[i] == ch && s[i] != '.') {
            count++;
            i++;
        }
        printf("%c%d", ch, count);
    }

    return 0;
}
