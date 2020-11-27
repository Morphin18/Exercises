// Количество слов в строке

#include "stdafx.h"
#include <windows.h>



#define SIZE  1000


int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char str[SIZE], count = 1;
	fgets(str, SIZE, stdin);
	for (int i = 0; str[i] != '\n'; i++)
	{
		if (str[i] == ' ') count++;
	}
	 
	return 0;
}
