// Вывод таблицы символов ASCII на экран


#include "stdafx.h"
#include <windows.h>




int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int count = 0;
	for (char ch = 32; ch < 127; ch++)
	{   
		count++;
		if (count != 10)
		{
			printf(" %c ", ch);
		}
		else
		{
			printf("\n");
			count = 0;
		}
		
	}

	return 0;
}
