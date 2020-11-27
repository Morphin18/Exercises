// Вывод символов по диагоналям


#include "stdafx.h"
#include <windows.h>




int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char ch;
	scanf("%c", &ch);
	for (int i = 0; i < 20; i++)
	{   
		for (int j = 0; j < 20; j++)
		{
			if (i == j || i == 20 - j)
			{
				printf("%c", ch);
			}
			else printf(" ");
		}
		printf("\n");
	}

	return 0;
}
