//Удаление из строки повторяющихся символов

#include "stdafx.h"
#include <windows.h>
#include <stdbool.h>


int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	char s[] = { "asdasdfgafjidr" };
	int size = strlen(s);

	for (int i = 0; i < size; i++)
	{
		bool b = true;
		for (int j = i + 1; j < size; j++)
		{
			if (s[i] == s[j])
			{
				b = false;
			}
		}
		if (b) printf("%c", s[i]);
	}
	

	return 0;
}
