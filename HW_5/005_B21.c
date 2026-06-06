#include <stdio.h>
int main() {
    char c;
    while ((c = getchar()) != '.') 
    {
        if (c >= 'A' && c <= 'Z') {
            c += 32; 
        }
        putchar(c);
    }
   //putchar('.');  
    
    return 0;
}
        
    
