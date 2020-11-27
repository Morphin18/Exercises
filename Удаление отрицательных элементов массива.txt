// Удаление отрицательных элементов массива


#include "stdafx.h"
#include <windows.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 7

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int array[SIZE], max;
	max = SIZE;
	srand(unsigned(time(NULL)));
	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand() % 20 - 5;
		printf(" %d ", array[i]);
	}
	for (int i = 0; i < max; i++)
	{
		if (array[i] < 0)
		{
			for (int j = i; j < SIZE - 1; j++)
			{
				array[j] = array[j + 1];
			}
			max--;
		}
	}
	printf("\n");
	for (int i = 0; i < max; i++)
	{
		printf(" %d ", array[i]);
	}
	return 0;
}
