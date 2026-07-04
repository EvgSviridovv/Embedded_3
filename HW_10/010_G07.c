#include <stdio.h>
#include <string.h> 

#define FILE_SIZE 10000

int main (void)
{
	FILE *f_in, *f_out;
	int i;
	char s[FILE_SIZE];
	size_t len;
	int code,letters=0, capital_letters=0;
	f_in = fopen("input.txt","r");
	f_out = fopen("output.txt","w");
	fgets(s, sizeof(s), f_in); 
	len = strlen(s);
	if (s[len - 1] == '\n') 
    {
        s[len - 1] = '\0';
     //   len--;
    }
	for (i=0;i<(int)len;i++)
	{
		code = s[i];
		if ((code >= 65) & (code <= 90))
		capital_letters++;	
		if ((code >= 97) & (code <= 122))
		letters++;	
	}		
	
	fprintf(f_out, "%d %d", letters, capital_letters);
	fclose(f_in);
	fclose(f_out);
	return 0;
}
