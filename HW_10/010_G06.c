#include <stdio.h>
#include <string.h> 

#define FILE_SIZE 1000

int is_palindrom(char str[1000]);

int is_palindrom(char str[1000]) 
{
	int i;
	if (str == NULL) return 0;
    size_t len = strlen(str);
    for (size_t i = 0; i < len / 2; ++i) 
    {
        if (str[i] != str[len - 1 - i]) 
        {
            return 0;
        }
    }
    return 1;
}


 
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
    }
	//printf("%s \n", s);
	//printf("\n");
		
	if (is_palindrom(s)) 
		fprintf(f_out, "YES");
	else 
		fprintf(f_out, "NO");
		
	fclose(f_in);
	fclose(f_out);
	return 0;
}
