#include <stdio.h>
#include <string.h> 
#include <ctype.h>
#include <stdlib.h>

#define FILE_SIZE 1001

int main (void)
{
	FILE *f_in, *f_out;
	int i, count=0;
	char s[FILE_SIZE];
	size_t len;
	
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
        while (s[i] != '\0' && s[i] != ' ') i++;
        if ((s[i-1] == 'A') || (s[i-1] =='a')) 
			count++;
    }
    fprintf(f_out, "%d", count);
	fclose(f_in);
	fclose(f_out);
	return 0;
}
