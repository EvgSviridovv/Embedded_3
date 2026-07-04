#include <stdio.h>
#include <math.h>

int main() {
    FILE *f_in = fopen("input.txt", "r");
    FILE *f_out = fopen("output.txt", "w");
    if (!f_in || !f_out) return 1;

    int count = 0, ch;
    while ((ch = fgetc(f_in)) != EOF)
        if (ch == '*') count++;
    fclose(f_in);

    long long D = 1LL + 8LL * count;
    long long root = (long long)sqrt((double)D);

    if (root * root != D || root % 2 == 0 || count == 0) 
    {
        fprintf(f_out, "NO\n");
        fclose(f_out);
        return 0;
    }

    int k = (int)((-1 + root) / 2);

    for (int i = 1; i <= k; ++i) {
        for (int s = 0; s < k - i; ++s)
            fputc(' ', f_out);
        for (int j = 0; j < i; ++j) {
            fputc('*', f_out);
            if (j != i - 1) fputc(' ', f_out);
        }
        fputc('\n', f_out);
    }

    fclose(f_out);
    return 0;
}
