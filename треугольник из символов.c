// треугольник из символов

#include "stdafx.h"
#include <windows.h>


#define SIZE 20


int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE-i; j++)
		{
			printf(" ");
		}
		for (int k = SIZE-i*2-1; k < SIZE; k++)
		{
			printf("#");
		}
		printf("\n");
	}

	return 0;
}
