#include <stdio.h>
#include <string.h>
#include <ctype.h>

int get_code(char c) {
    switch (tolower(c)) {
        case 'b': case 'f': case 'p': case 'v': return 1;
        case 'c': case 'g': case 'j': case 'k': case 'q': case 's': case 'x': case 'z': return 2;
        case 'd': case 't': return 3;
        case 'l': return 4;
        case 'm': case 'n': return 5;
        case 'r': return 6;
        default: return 0;
    }
}

int main() {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    char word[21], res[5] = {0};
    fscanf(fin, "%s", word);
    
    res[0] = word[0];
    int idx = 1, last = 0;
    for (int i = 1; word[i] && idx < 4; i++) {
        int code = get_code(word[i]);
        if (code && code != last) {
            res[idx++] = '0' + code;
            last = code;
        }
    }
    while (idx < 4) res[idx++] = '0';
    fprintf(fout, "%s\n", res);
    fclose(fin);
    fclose(fout);
    return 0;
}
