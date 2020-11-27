// Удалить цифру из числа

#include "stdafx.h"
#include <windows.h>


#define SIZE 20


int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int num1, ans;
    int num3 = 0;
 	int num4 = 0;

	printf("Введите число: ");
	scanf("%d", &num1);
	printf("Какую число удалить? ");
	scanf("%d", &ans);
	while (num1 != 0)
	{
		if ((num1 % 10) != ans)
		{
			num3 = num3 * 10 + num1 % 10;
			num1 /= 10;
		}
		else
		{
			num1 /= 10;
		}
	}
	while(num3 != 0)
	{
		num4 = num4 * 10 + num3 % 10;
		num3 /= 10;
	}
	printf("%d", num4);

	return 0;
}
