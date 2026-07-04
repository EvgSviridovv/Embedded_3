#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main(void) {
    FILE *f_in = fopen("input.txt", "r");
    FILE *f_out = fopen("output.txt", "w");

    char word1[MAX_LEN + 1];
    char word2[MAX_LEN + 1];

    int freq1[26] = {0}; 
    int freq2[26] = {0}; 
	if (fscanf(f_in, "%100s %100s", word1, word2) != 2) 
	{
        fclose(f_in);
        fclose(f_out);
        return 1;
    }
    size_t len1 = strlen(word1);
    for (size_t i = 0; i < len1; ++i) 
    {
        if (word1[i] >= 'a' && word1[i] <= 'z') 
             freq1[word1[i] - 'a']++;
          else 
          {
				fprintf(f_out, "%c", 'у');
				return 0;
			}
			
    }

    size_t len2 = strlen(word2);
    for (size_t i = 0; i < len2; ++i) 
    {
        if (word2[i] >= 'a' && word2[i] <= 'z')
            freq2[word2[i] - 'a']++;
        else 
        {fprintf(f_out, "%c", '0');
			return 0;
		}
    }

    int first = 1; 
    for (int c = 0; c < 26; ++c) 
    {
        if (freq1[c] == 1 && freq2[c] == 1) 
        {
            if (!first) 
            {
                fprintf(f_out, " ");
            }
            fprintf(f_out, "%c", 'a' + c);
            first = 0;
        }
    }

    fclose(f_in);
    fclose(f_out);
    return 0;
}

