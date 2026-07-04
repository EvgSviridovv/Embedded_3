#include <stdio.h>
#include <string.h> 

#define FILE_SIZE 100

int main (void)
{
	FILE *f_in, *f_out;
	int i,j, count1,count2;
	char word1[FILE_SIZE],word2[FILE_SIZE], s[FILE_SIZE];
	
	size_t len1, len2;
	f_in = fopen("input.txt","r");
	f_out = fopen("output.txt","w");
	if (fscanf(f_in,"%s %s", word1, word2) == 2) 
	{
		printf("%s\n",word1);
		printf("%s\n",word2);
	}
	len1 = strlen(word1);
	len2 = strlen(word2);	
	count2 = 0;
    for (i=0;i<(int)(len1);i++)
    {
		count1 = 1;
		for(j=i+1;j<(int)(len1);j++)
		{
			if (word1[i] == word1[j])
			count1 ++;
		}
		if (count1 ==1) 
		{
			for(j=0;j<(int)(len2);j++)
			{
				if (word1[i] == word2[j])
					count1 ++;
			}
			if (count1 == 2) 
			{
				s[count2] = word1[i];
				count2++;
			}
				
			
		}
		
	}
	printf("%s\n",s);
    //~ //len--;
	//~ printf("%s \n", s);
	//~ printf("\n");
	//~ char last = s[len -1];
	//~ for (i=0;i<(int)len;i++)
		//~ printf("%c ", s[i]);
	//~ printf("\n");	
    //~ printf("%c %d \n", last, last);  
	//~ j=0;
	//~ for (i=0;i<(int)(len-1);i++)
		//~ if (s[i] == last)
			//~ {
				//~ s1[j] = i;
				//~ printf("%d ", s1[j]);
				//~ fprintf(f_out, "%d ", s1[j]);
				//~ j++;
			//~ }
	//~ //fprintf(f_out, "%s ", s1);
	fclose(f_in);
	fclose(f_out);
	return 0;
}

