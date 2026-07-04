#include <stdio.h>
#include <string.h> 
#include <ctype.h>
#include <stdlib.h>

#define FILE_SIZE 1000
int cmp_int(const void *a, const void *b) 
{
    int ia = *(const int *)a;
    int ib = *(const int *)b;
    if (ia < ib) return -1;
    if (ia > ib) return 1;
    return 0;
}
int main (void)
{
	FILE *f_in, *f_out;
	int i;
	int nums[1000];
	int count = 0;
	char s[FILE_SIZE];
	size_t len;
	f_in = fopen("input.txt","r");
	f_out = fopen("output.txt","w");
	fgets(s, sizeof(s), f_in); 
	len = strlen(s);
	if (s[len - 1] == '\n') 
    {
        s[len - 1] = '\0';
     //   len--;
    }
	for (i=0;i<(int)len;++i)
	{
		if(isdigit((unsigned char)s[i]))
		{
			int value = 0;
            while (i < len && isdigit((unsigned char)s[i])) 
            {
                value = value * 10 + (s[i] - '0');
                ++i;
            }
            --i; 
            if (count < FILE_SIZE ) 
                nums[count++] = value;	
		}
		
	}	
	qsort(nums, count, sizeof(int), cmp_int);	
	for (int i = 0; i < count; ++i) 
	{
		fprintf(f_out, "%d", nums[i]);
		if (i != count - 1) 
			fprintf(f_out, " ");
	}
	//fprintf(f_out, "%d", nums);
	fclose(f_in);
	fclose(f_out);
	return 0;
}
