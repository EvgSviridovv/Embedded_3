#include <stdio.h>
#include <string.h> 
#include <locale.h>

int main (void)
{
	FILE *f_in, *f_out;
	int a, i, count_digits, count_letter, file_size = 27;
	char s[file_size];
	setlocale(LC_ALL,  "ru_RU.UTF-8");  
	  
	f_in = fopen("input.txt","r");
	f_out = fopen("output.txt","w");
	fscanf(f_in,"%d", &a);
	if ((a%2 != 0)|| (a > 26))
	{
		printf("Число должно быть четным и <= 26");
		return 1;
	}
	s[0] =  'A';// (char) 65;
	s[1] =  '2';//(char) 50;
	count_letter =1;
	count_digits = 2;
	for(i=2; i<a; i++)
	{
		if (i%2 == 0)
		{
		s[i] = (char)(65+count_letter);	
		count_letter++;		
		}
		else 
		{
		if (50+count_digits > 56)
			count_digits = 0;	
		s[i] =(char)(50+count_digits); 
		count_digits+=2;	
		}
	}
	
//	    len = sizeof(s);
		for(i=a; i<file_size; i++)
			s[i] = '\0';
		fprintf(f_out, "%s", s);
	//~ for(i=0; i<a; i++)
	//	fprintf(f_out, "%c", s[i]);
	fclose(f_in);
	fclose(f_out);
	return 0;
}

