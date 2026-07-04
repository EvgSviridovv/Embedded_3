#include <stdio.h>
#include <string.h> 

int main (void)
{
	char s[102];
	FILE *f, *f_out;
	int len;
	f = fopen("input.txt","r");
	f_out = fopen("output.txt","w");
	if ((f == NULL) || (f_out == NULL)) 
	{
        printf("Ошибка при открытии файла!");
        return 1;
    }
	while (fgets(s, sizeof(s), f) != NULL)
	{
	    len = (int)strlen(s);
	    //~ printf("%s, %d\n" , s, len);
	    if (len && s[len-1] == '\n') 
			s[len-1] = '\0';
		//~ printf("%s, %d" , s, len);
	    //~ printf("%s, %s, %s %d", s, s, s, len);
        fprintf(f_out, "%s, %s, %s %d", s, s, s, len-1);
	}
	
	fclose(f);
	fclose(f_out);
	return 0;
}

