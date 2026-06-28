#include <stdio.h>
void sort_array(int size, int a[])
{
    int i, j, min, i_min, temp;
    for (j = 0; j < size - 1; j++) {
        min = a[j];
        i_min = j;
        for (i = j + 1; i < size; i++) {
            if (a[i] < min) {
                min = a[i];
                i_min = i;
            }
        }
        if (i_min != j) {
            temp = a[j];
            a[j] = a[i_min];
            a[i_min] = temp;
        }
    }
}

//~ int main(void) 
//~ {
	//~ int *b = NULL, num, size = 0;
    //~ while (scanf("%d", &num) == 1) 
        //~ b[size++] = num;
   //~ // for (i = 0; i < 10; i++)
    //~ //    scanf("%d", &b[i]);
	//~ sort_array(size, b);
//~ }
