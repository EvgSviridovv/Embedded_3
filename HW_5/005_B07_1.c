#include <stdio.h>

int main() {
    int num;
    int digit_count[10] = {0};  // Массив для подсчёта количества каждой цифры (0–9)
    int has_duplicates = 0;       // Флаг: 1 — есть повторяющиеся цифры, 0 — нет



    scanf("%d", &num);

    // Если число 0, проверяем отдельно
    if (num == 0) {
        printf("NO");
        return 0;
    }

    // Извлекаем цифры по одной и считаем их количество
    while (num > 0) {
        int digit = num % 10;  // Получаем последнюю цифру
        digit_count[digit]++;  // Увеличиваем счётчик для этой цифры

        // Если цифра встретилась более одного раза, устанавливаем флаг
        if (digit_count[digit] >= 2) {
            has_duplicates = 1;
            break;  // Выходим из цикла, как только нашли повторение
        }

        num = num / 10;  // Убираем последнюю цифру из числа
    }

    if (has_duplicates) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
