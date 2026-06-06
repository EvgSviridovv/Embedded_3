#include <stdio.h>

int main() {
    int num, last_digit, prev_digit;
    int has_adjacent = 0;  // Флаг: 1 — есть одинаковые соседние цифры, 0 — нет


    scanf("%d", &num);

    // Берём модуль числа для работы с отрицательными числами
    if (num < 0) {
        num = -num;
    }

    // Если число 0, проверяем отдельно
    if (num == 0) {
        printf("Нет, в числе нет двух одинаковых цифр стоящих рядом\n");
        return 0;
    }

    prev_digit = -1;  // Инициализируем значением, которое не может быть цифрой

    while (num > 0) {
        last_digit = num % 10;  // Получаем последнюю цифру

        // Если предыдущая цифра существует и совпадает с текущей
        if (prev_digit == last_digit) {
            has_adjacent = 1;
            break;  // Выходим из цикла, как только нашли совпадение
        }

        prev_digit = last_digit;  // Запоминаем текущую цифру как предыдущую
        num = num / 10;         // Убираем последнюю цифру из числа
    }

    if (has_adjacent) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
