#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

typedef enum {
    IDLE,           // ждёт монету или выбор
    COIN_INSERTED,  // монеты вставлены, но мало
    COFFEE_READY,   // достаточно денег, ждёт «выдать»
    OUT_OF_STOCK,   // кофе закончился
    MAKING_COFFEE   // прямо сейчас «готовит»
} State;

#define PRICE_COFFEE 5

// Простая ASCII-графика автомата
void draw_machine(State s, int balance, int stock) {
    printf("\n");
    printf(" ******************************************\n");
    printf(" *           КОФЕЙНЫЙ АВТОМАТ           *\n");
    printf(" ******************************************\n");

    printf(" * Статус: ");
    switch (s) {
        case IDLE:          printf("Готов к работе                         *\n"); break;
        case COIN_INSERTED: printf("Внесено: %-3d руб. Добавьте ещё.       *\n", balance); break;
        case COFFEE_READY:  printf("Оплачено: %-3d руб. Нажмите 'c'.      *\n", balance); break;
        case OUT_OF_STOCK:  printf("Кофе закончился! Требуется пополнение. *\n"); break;
        case MAKING_COFFEE: printf("Шшш… Приготовление… Готово!            *\n"); break;
    }

    printf(" * Остаток кофе: %-2d порций                *\n", stock);
    printf(" * Цена кофе:     %-2d руб.                 *\n", PRICE_COFFEE);
    printf(" ******************************************\n");
}

// Рисуем стаканчик
void draw_cup() {
    printf("   /   \\ \n");
    printf("  |     |\n");
    printf("  |  ☕  |\n");
    printf("  \\_____/\n");
}

int main(void) {
	setlocale(LC_CTYPE, "ru_RU.UTF-8");
    State state = IDLE;
    int balance = 0;
    int stock = 3;          // 3 порции кофе в запасе
    char input[16];

    while (1) 
    {
        printf("Используйте: 1/2/5 (монеты), c (кофе), r (пополнить), q (выход).\n");
        draw_machine(state, balance, stock);
        printf("> ");
        if (!fgets(input, sizeof(input), stdin)) {
            break; // конец ввода
        }

        // Убираем перевод строки
        size_t len = strlen(input);
        if (len > 0 && input[len - 1] == '\n') {
            input[len - 1] = '\0';
        }
        if (len == 0) continue;

        char cmd = tolower((unsigned char)input[0]);

        // Если команда длиннее одного символа — смотрим только первый символ
        // (чтобы можно было писать и «1», и «1руб», и т.п.)

        if (cmd == 'q') {
            printf("До свидания! Приходите ещё!\n");
            break;
        }

        if (state == OUT_OF_STOCK) {
            if (cmd == 'r') {
                stock = 3;
                state = IDLE;
                balance = 0;
                printf("Запас кофе пополнен. Автомат снова готов к работе.\n");
                continue;
            } else {
                printf("Автомат не работает: нет кофе. Выполните команду 'r' для пополнения.\n");
                continue;
            }
        }

        switch (cmd) {
            case '1':
            case '2':
            case '5': {
                int amount = cmd - '0';
                if (state == MAKING_COFFEE) {
                    printf("Сейчас идёт приготовление. Дождитесь окончания.\n");
                    break;
                }
                balance += amount;
                if (balance >= PRICE_COFFEE) {
                    state = COFFEE_READY;
                    printf("Набрано достаточно средств. Нажмите 'c' для выдачи кофе.\n");
                } else {
                    state = COIN_INSERTED;
                    int need = PRICE_COFFEE - balance;
                    printf("Вставлена монета %d руб. Осталось добавить %d руб.\n", amount, need);
                }
                break;
            }

            case 'c':
                if (state == COFFEE_READY) {
                    if (stock <= 0) {
                        state = OUT_OF_STOCK;
                        printf("Ой! Кофе закончился прямо перед выдачей. Техник уже вызван.\n");
                        break;
                    }
                    // Начинаем «готовить»
                    state = MAKING_COFFEE;
                    draw_machine(state, balance, stock);

                    // Имитация задержки (опционально, но в консоли без sleep сложно сделать красиво)
                    // Можно просто сразу показать результат:
                    stock--;
                    balance = 0;
                    state = IDLE;

                    printf("\nВаш кофе готов! Приятного аппетита!\n");
                    draw_cup();
                } else if (state == IDLE || state == COIN_INSERTED) {
                    if (balance < PRICE_COFFEE) {
                        int need = PRICE_COFFEE - balance;
                        printf("Сначала внесите полную оплату. Осталось: %d руб.\n", need);
                    } else {
                        // Этот случай теоретически не должен возникать при правильной логике
                        printf("Что-то пошло не так. Попробуйте снова.\n");
                    }
                } else {
                    printf("Неверная последовательность действий. Проверьте статус автомата.\n");
                }
                break;

            case 'r':
                // Пополнение запаса
                stock = 3;
                balance = 0;
                state = IDLE;
                printf("Запас кофе пополнен до 3 порций. Баланс сброшен.\n");
                break;

            default:
                printf("Неизвестная команда. Используйте: 1/2/5 (монеты), c (кофе), r (пополнить), q (выход).\n");
                break;
        }
    }

    return 0;
}
