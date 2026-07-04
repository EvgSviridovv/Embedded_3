#include <stdio.h>
#include <string.h> 

#define FILE_SIZE 1000

int main (void)
{
	FILE *f_in, *f_out;
	int i;
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
	//printf("%s \n", s);
	//printf("\n");
	for (i=0;i<(int)len;i++)
	{
		if	(s[i] == 'a')
			s[i] = 'b';
		else if	(s[i] == 'A')
			s[i] = 'B';
		else if	(s[i] == 'b')
			s[i] = 'a';
		else if	(s[i] == 'B')
			s[i] = 'A';
	}		
	
	fprintf(f_out, "%s ", s);
	fclose(f_in);
	fclose(f_out);
	return 0;
}
