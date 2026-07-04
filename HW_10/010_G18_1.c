#include <stdio.h>
#include <string.h>

#define FILE_SIZE 1001


void remove_extra_spaces(char *s) {
    if (!s) return;

    size_t i = 0;        
    size_t j = 0;        
    int prev_was_space = 0;

   while (s[i] == ' ') {
        i++;
    }

    while (s[i] != '\0') {
        if (s[i] == ' ') {
            if (!prev_was_space) 
            {
                s[j++] = ' ';
                prev_was_space = 1;
            }
           
        } else 
        {
            s[j++] = s[i];
            prev_was_space = 0;
        }
        i++;
    }

    s[j] = '\0';  
}

int main(void) {
    FILE *f_in = fopen("input.txt", "r");
    FILE *f_out = fopen("output.txt", "w");

    if (!f_in || !f_out) {
        perror("Ошибка открытия файла");
        return 1;
    }

    char s[FILE_SIZE];
    if (!fgets(s, sizeof(s), f_in)) {
        fclose(f_in);
        fclose(f_out);
        return 0;
    }

   
    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
    }

    remove_extra_spaces(s);  

    fprintf(f_out, "%s\n", s);
    printf("%s\n", s);

    fclose(f_in);
    fclose(f_out);
    return 0;
}
