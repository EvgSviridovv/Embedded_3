#include <stdio.h>

char toUpper(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 'a' + 'A';
    }
    return c;
}

int main() {
    char input[1000];
    scanf("%[^.]", input);
  //  printf("Исходная строка: %s.\n", input);
    //printf("");
    for (int i = 0; input[i] != '\0'; i++) {
        printf("%c", toUpper(input[i]));
    }
    //printf(".\n");
    return 0;
}
   
   
