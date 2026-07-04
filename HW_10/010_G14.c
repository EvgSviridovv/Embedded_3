
#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    FILE *f_in = fopen("input.txt", "r");
    FILE *f_out = fopen("output.txt", "w");
    char famil[MAX],name[MAX],otch[MAX];
    if (!f_in || !f_out) return 1;

   	fscanf(f_in, "%s %s %s", famil,name,otch);
    fclose(f_in);
    printf("Hello, %s %s \n", name, famil);
    fprintf(f_out, "Hello, %s %s!\n", name, famil);
    fclose(f_out);
    return 0;
}
