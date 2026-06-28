#include <stdio.h>

int main() {
    char col;
    int row;
    scanf("%c%d", &col, &row);

    int x = col - 'A';      // 0..7
    int y = row - 1;        // 0..7

    if ((x + y) % 2 == 0) {
        printf("BLACK\n");
    } else {
        printf("WHITE\n");
    }

    return 0;
}
