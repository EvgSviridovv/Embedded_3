#include <stdio.h>
int main() {
    int x, sum = 0, count = 0;
    int min_val = 2000, max_val = 0; 
    while (scanf("%d", &x) == 1 && x != 0) 
    {
        sum += x;
        count++;
        if (x < min_val) min_val = x;
        if (x > max_val) max_val = x;
    }
    int total_count = max_val - min_val + 1;
    int expected_sum = (min_val + max_val) * total_count / 2;
    printf("%d\n", expected_sum - sum);
    return 0;
}
