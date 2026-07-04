
#include <stdio.h>
#include <string.h>

#define MAX 1000

int main() {
    FILE *f_in = fopen("input.txt", "r");
    FILE *f_out = fopen("output.txt", "w");
    if (!f_in || !f_out) return 1;

    char s[MAX];
    fgets(s, sizeof(s), f_in);
    fclose(f_in);

    size_t len = strlen(s);
      if (len > 0 && s[len - 1] == '\n') {
        s[--len] = '\0';
    }

	 char *last_slash = strrchr(s, '/');

    char *base; 
    if (last_slash) {
        base = last_slash + 1; 
    } else {
        base = s;
    }
    
    
    char *dot = strrchr(base, '.');
    if (dot) 
        strcpy(dot, ".html");
	else 
        strcat(s, ".html");
    fprintf(f_out, "%s\n", s);
    fclose(f_out);
    return 0;
}
