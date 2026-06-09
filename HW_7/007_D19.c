#include <stdio.h>

int acounter(void) 
{
    char c;
    int count_in_rest;
    scanf("%c", &c);
    if (c == '.') 
        return 0; 
    count_in_rest = acounter();
    if (c == 'a') 
        return count_in_rest + 1;
    else
        return count_in_rest;
}

int main() 
{
    printf("%d\n", acounter());
    return 0;
}
