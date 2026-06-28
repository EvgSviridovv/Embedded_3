
#include <stdio.h>

void print_digits(const char n[]) {
    int cnt[10] = {0};
    for (int i = 0; n[i]; i++) {
        if (n[i] >= '0' && n[i] <= '9') cnt[n[i] - '0']++;
    }
    for (int d = 0; d < 10; d++) {
        if (cnt[d]) printf("%d %d ", d, cnt[d]);
    }
}

int main() {
    char s[1005];
    scanf("%s", s);
    print_digits(s);
    return 0;
}
