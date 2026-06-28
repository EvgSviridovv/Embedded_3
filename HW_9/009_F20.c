
#include <stdio.h>

int main() {
    int a[10], e = 0, o = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0) e++; else o++;
    }

    if (e > o) {
        for (int i = 0; i < 10; i++) {
            if (a[i] % 2 != 0) {
                int x = a[i] > 0 ? a[i] : -a[i], p = 1, f = 0;
                if (x == 0) f = 0;
                while (x > 0) {
                    int d = x % 10;
                    if (d % 2 != 0) { p *= d; f = 1; }
                    x /= 10;
                }
                a[i] = f ? p : 1;
            }
        }
    } else {
        for (int i = 0; i < 10; i++) {
            if (a[i] % 2 == 0) {
                if (a[i] == 0) { a[i] = 0; continue; }
                int x = a[i] > 0 ? a[i] : -a[i], p = 1, f = 0;
                while (x > 0) {
                    int d = x % 10;
                    if (d % 2 == 0) { p *= d; f = 1; }
                    x /= 10;
                }
                a[i] = f ? p : 0;
            }
        }
    }

    for (int i = 0; i < 10; i++) printf("%d ", a[i]);
    return 0;
}
