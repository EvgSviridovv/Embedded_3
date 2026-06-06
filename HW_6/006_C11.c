#include <stdio.h>

int nod(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", nod(x, y));
    return 0;
}
