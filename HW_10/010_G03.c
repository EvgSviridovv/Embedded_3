#include <stdio.h>
#include <string.h> 

#define FILE_SIZE 1000

int main (void)
{
	FILE *f_in, *f_out;
	int i,j;
	char s[FILE_SIZE];
	int s1[FILE_SIZE];
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
    //len--;
	printf("%s \n", s);
	printf("\n");
	char last = s[len -1];
	for (i=0;i<(int)len;i++)
		printf("%c ", s[i]);
	printf("\n");	
    printf("%c %d \n", last, last);  
	j=0;
	for (i=0;i<(int)(len-1);i++)
		if (s[i] == last)
			{
				s1[j] = i;
				printf("%d ", s1[j]);
				fprintf(f_out, "%d ", s1[j]);
				j++;
			}
	//fprintf(f_out, "%s ", s1);
	fclose(f_in);
	fclose(f_out);
	return 0;
}

