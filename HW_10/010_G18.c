#include <stdio.h>
#include <string.h> 
#include <ctype.h>
#include <stdlib.h>

#define FILE_SIZE 1001

int main (void)
{
	FILE *f_in, *f_out;
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

 
  
    for (size_t i = 0; i < len; i++)
    {
        if ((s[i] == ' ') && (i==0)) 
			continue;
		else if(s[i] == ' ' && (s[i+1] == ' '))
			continue;
		fprintf(f_out, "%c", s[i]);	
		
	}
	
 
    
    //printf("%s\n", s);
	fclose(f_in);
	fclose(f_out);
	return 0;
}
