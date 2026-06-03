#include <stdio.h>

int main(void)
{
	int a;
	int sum;
	scanf("%d",&a);
	int hundreds = a / 100;           // Сотни
    int tens = (a % 100) / 10;      // Десятки
    int units = a % 10;              // Единицы
    
    // Вычисление произведения цифр
    sum = hundreds * tens * units;
    
    // Вывод результата
    printf("%d\n", sum);
    
	//~ sum = a%10; 
	//~ printf("%d\n",sum);
	//~ sum =sum*(a/10)%10;
	//~ printf("%d\n",sum);
	//~ sum = sum * (a/100)%10; 
	//~ printf("%d\n",sum);
	return 0;
}

