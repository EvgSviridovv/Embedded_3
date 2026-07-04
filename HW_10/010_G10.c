#include <stdio.h>
#include <string.h> 
#include <ctype.h>
#include <stdlib.h>

#define FILE_SIZE 1001

int main (void)
{
	FILE *f_in, *f_out;
	int i;
	char s[FILE_SIZE], longest[FILE_SIZE]="";
	size_t len;
	int start, cur_len=0, best_len=0;
	
	f_in = fopen("input.txt","r");
	f_out = fopen("output.txt","w");
	fgets(s, sizeof(s), f_in); 
	len = strlen(s);
	if (s[len - 1] == '\n') 
    {
        s[len - 1] = '\0';
      //  len--;
    }

    for (i = 0; s[i] != '\0'; ) 
    {
        while (s[i] == ' ') i++;
        if (s[i] == '\0') break;
        start = i;
        while (s[i] != '\0' && s[i] != ' ') i++;

        cur_len = i - start;
        
        
        if (cur_len > best_len) 
        {
            best_len = cur_len;
            strncpy(longest, s + start, cur_len);
            longest[cur_len] = '\0';
        }
    }
    fprintf(f_out, "%s", longest);
	fclose(f_in);
	fclose(f_out);
	return 0;
}
