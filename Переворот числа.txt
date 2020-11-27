// Переворот числа


#include "stdafx.h"
#include <windows.h>




int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int number = 0;
	int number_s = 0;
	scanf("%d", &number);
	while (number > 0)
	{
		number_s = number_s * 10 + number % 10;
		number /= 10;
	}
	printf("\n%d", number_s);



	return 0;
}
