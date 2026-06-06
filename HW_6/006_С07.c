#include <stdio.h>

void decToP(int n, int p, char *res) {
    int i = 0;
    do {
        res[i++] = '0' + (n % p);
        n /= p;
    } while (n > 0);
    res[i] = '\0';

    for (int j = 0, k = i - 1; j < k; j++, k--) {
        char t = res[j];
        res[j] = res[k];
        res[k] = t;
    }
}

int main() {
    int n, p;
    char res[33];
    scanf("%d %d", &n, &p);
    decToP(n, p, res);
    printf("%s\n", res);
    return 0;
}
   
   
