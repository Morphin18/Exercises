// Разложить положительные и отрицательные числа по разным массивам


#include "stdafx.h"
#include <windows.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int array_first[SIZE], array_second[SIZE], number, j, k;
	j = 0;
	k = 0;

	srand(unsigned(time(NULL)));
	for (int i = 0; i < SIZE; i++)
	{
		number = rand() % 40 - 20;
		if (number > 0)
		{
			array_first[j] = number;
			j++;
		}
		else
		{
			array_second[k] = number;
			k++;
		}
		printf(" %d ", number);
	}
	printf("\n");
	for (int i = 0; i < j; i++)
	{
		printf(" %d ", array_first[i]);
	}
	printf("\n");
	for (int i = 0; i < k; i++)
	{
		printf(" %d ", array_second[i]);
	}

	return 0;
}
