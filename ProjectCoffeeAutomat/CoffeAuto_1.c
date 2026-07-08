#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

typedef enum states{READY,COUNT,MAKE,CHANGE,RETURN,EXIT};

void ready_panel(void)
{
	printf("   +-----------------------+\n");
	printf("   |  COFFEE MACHINE       |\n");
	printf("   +-----------------------+\n");
	printf("   | STATUS:READY          |\n");
	printf("   +--------+--------------+\n");
	printf("   | [1] Espresso = 2RUB   |\n");
	printf("   | [2] Cappuccino = 3RUB |\n");
	printf("   | [3] Latte      = 5RUB |\n");
	printf("   | [4] Americano =  1RUB |\n");
	printf("   +--------+--------------+\n");
	//~ printf("            |\n");
	//~ printf("            V\n");
	//~ printf("         +------+\n");
	//~ printf("         |  []  |\n");
	//printf("         +------+\n\n");

	printf("   PANEL:\n");
	printf("   [c-COUNT]  [m-MAKE]  [c-CHANGE]  [r-RETURN]\n");
	printf("   [Coins: 1 - 1RUB; 2 - 2RUB; 5 - 5RUB]\n");
	printf("   [Exit: q]\n");
}	
enum states GetUserSignal(void)
{
		char c;
		c = getchar();
		if (c=='q')
		printf("СПАСИБО! ДО СВИДАНИЯ!");
		return EXIT;

}

int main(void)
{
	enum states state = READY;
	setlocale(LC_ALL, "ru_RU.UTF-8");
	ready_panel();
	while(1)
	{
		//ready_panel();
		state = GetUserSignal(); 
		switch (state)
		{
			case READY:
	//		ready_panel();
			
			//~ if(Rubl_2) state = PREPFRE;
			//~ if(Rubl_1) state = WAIT;

				break;
			
			case COUNT:
				printf("КЛАДИТЕ ДЕНЬГИ ПО 1,2,5 руб");
				break;
			
			case MAKE:
				printf("ДЕЛАЕМ КОФЕ");
				break;
			
			case CHANGE:
				printf("ВОЗЬМИТЕ СДАЧУ");
				break;
			
			case RETURN:
				printf("ВОЗВРАЩЕМ ДЕНЬГИ");
				break;
			
			case EXIT:
				printf("СПАСИБО! ДО СВИДАНИЯ! EXIT:");
				return 0;
				break;
			default:
				printf("СПАСИБО! ДО СВИДАНИЯ! default %s", state);
				return 0;
			
		}

	}
}
