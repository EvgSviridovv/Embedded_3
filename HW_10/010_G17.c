#include <stdio.h>
#include <string.h> 
#include <ctype.h>
#include <stdlib.h>

#define FILE_SIZE 1001

int main (void)
{
	FILE *f_in, *f_out;
	char s[FILE_SIZE], no_space[FILE_SIZE];
	size_t len;
	
	f_in = fopen("input.txt","r");
	f_out = fopen("output.txt","w");
	fgets(s, sizeof(s), f_in); 
	len = strlen(s);
	if (s[len - 1] == '\n') 
    {
        s[len - 1] = '\0';
        len--;
    }

 
    int n = 0;  

    for (size_t i = 0; i < len; ++i)
        if (s[i] != ' ') 
			no_space[n++] = s[i];
 
    for (int i = 0; i + 1 < n; i += 2) 
    {
        char tmp = no_space[i];
        no_space[i] = no_space[i + 1];
        no_space[i + 1] = tmp;
    }

    int idx = 0; 
    for (size_t i = 0; i < len; ++i) 
    {
        if (s[i] == ' ') 
			continue;
        else 
            s[i] = no_space[idx++];
       
    }
    fprintf(f_out, "%s\n", s);
    printf("%s\n", s);
	fclose(f_in);
	fclose(f_out);
	return 0;
}
