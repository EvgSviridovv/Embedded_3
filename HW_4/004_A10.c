#include <stdio.h>

int main(void)
{
	int numbers[5], min, i;
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    min = numbers[0];
    for (i = 1; i < 5; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
		printf("%d",min);
	return 0;
}

