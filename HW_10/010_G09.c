#include <stdio.h>
#include <string.h> 
#include <ctype.h>
#include <stdlib.h>

#define FILE_SIZE 1000

int main (void)
{
	FILE *f_in, *f_out;
	int i;
	unsigned char ch;
	unsigned char seen[256] = {0};
	char s[FILE_SIZE];
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

    for (i = 0; i < len; ++i) 
    {
		ch = (unsigned char)s[i];
        if (ch == ' ') 
            continue;
        if (!seen[ch]) 
        {
            seen[ch] = 1;
            fprintf(f_out, "%c", ch);
        }
    }
	fclose(f_in);
	fclose(f_out);
	return 0;
}
