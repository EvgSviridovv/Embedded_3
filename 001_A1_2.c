#include <stdio.h>
#include <string.h>

int main() {
    const int rows = 6, cols = 7;
    char canvas[rows][cols];  
	memset(canvas, ' ', rows * cols);
       // Рисуем пирамиду на холсте
    for (int i = 0; i < 4; i++) {
        int spaces = 3 - i;
        int stars = 2 * i + 1;
        // Заполняем пробелы слева
        for (int j = 0; j < spaces; j++) canvas[i][j] = ' ';
        // Заполняем звёздочки
        for (int j = 0; j < stars; j++) canvas[i][spaces + j] = '*';
    }

    // Добавляем HHOHH (строка 4)
    const char* line5 = "HHOHH";
    for (int i = 0; i < 5; i++) canvas[4][i + 1] = line5[i];

    // Добавляем ZZZZZ (строка 5)
    for (int i = 0; i < 5; i++) canvas[5][i + 1] = 'Z';

    // Выводим весь холст
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c", canvas[i][j]);
        }
        printf("\n");
    }

    return 0;
}
