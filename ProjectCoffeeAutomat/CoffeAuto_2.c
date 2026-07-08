#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

typedef enum 
{
    READY,
    COUNT,
    MAKE,
    CHANGE,
    RETURN,
    EXIT_STATE
} State;

void ready_panel(void) {
    printf("   +-----------------------+\n");
    printf("   |  COFFEE MACHINE       |\n");
    printf("   +-----------------------+\n");
    printf("   | STATUS:READY          |\n");
    printf("   +--------+--------------+\n");
    printf("   | [1] Espresso = 2RUB   |\n");
    printf("   | [2] Cappuccino = 3RUB |\n");
    printf("   | [3] Latte      = 5RUB |\n");
    printf("   | [4] Americano =  1RUB |\n");
    printf("   +--------+--------------+\n\n");

    printf("PANEL:\n");
    printf("[c] - COUNT (внести деньги)\n");
    printf("[m] - MAKE (сделать кофе)\n");
    printf("[s] - CHANGE (сдача)\n");
    printf("[r] - RETURN (возврат денег)\n");
    printf("[q] - EXIT (выход)\n");
}

State get_user_signal(void) 
{
    char c;
    do 
    {
        c = getchar();
    } while (c == ' ' || c == '\n' || c == '\r' || c == '\t');

    c = tolower((unsigned char)c);

    switch (c) 
    {
        case 'q': return EXIT_STATE;
        case 'c': return COUNT;
        case 'm': return MAKE;
        case 's': return CHANGE;
        case 'r': return RETURN;
        default:  return READY; // или можно считать ошибкой
    }
}

int main(void) {
    State state = READY;
    setlocale(LC_ALL, "ru_RU.UTF-8");

    ready_panel();

    while (1) {
        state = get_user_signal();

        switch (state) 
        {
            case READY:
                printf("Автомат готов к работе. Выберите действие.\n");
                ready_panel();
                break;

            case COUNT:
                printf("КЛАДИТЕ ДЕНЬГИ ПО 1, 2, 5 руб.\n");
                // тут будет логика подсчёта монет
                break;

            case MAKE:
                printf("ДЕЛАЕМ КОФЕ...\n");
                // тут логика приготовления
                break;

            case CHANGE:
                printf("ВОЗЬМИТЕ СДАЧУ.\n");
                break;

            case RETURN:
                printf("ВОЗВРАЩАЕМ ДЕНЬГИ.\n");
                break;

            case EXIT_STATE:
                printf("СПАСИБО! ДО СВИДАНИЯ!\n");
                return 0;

            default:
                printf("Неизвестная команда. Попробуйте снова.\n");
                break;
        }
    }
}
