
#include <stdio.h>
#include <string.h>

#define MAX 1001

int main() {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    if (!fin || !fout) return 1;

    char s[MAX];
    fgets(s, sizeof(s), fin);
    fclose(fin);


	for (int i = 0; s[i]; i++) {
        if (s[i] == 'C' && s[i+1] == 'a' && s[i+2] == 'o') {
            fprintf(fout, "Ling");
            i += 2;
        } else {
            fputc(s[i], fout);
        }
    }
    //~ for (int i = 0; s[i]; i++) {
        //~ if (s[i] == 'C' && s[i+1] == 'a' && s[i+2] == 'o') {
            //~ strcat(res, "Ling");
            //~ i += 2;
        //~ } else {
            //~ strncat(res, &s[i], 1);
        //~ }
    //~ }

   // fprintf(fout, "%s\n", res);
    fclose(fout);
    return 0;
}
