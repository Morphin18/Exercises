// Сжать массив удалив элементы

#include "stdafx.h"
#include <windows.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int array[SIZE], number, i, m;
	srand(unsigned(time(NULL)));
	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand() % 15 + 2;
		printf(" %d ", array[i]);
	}
	printf("\nВыберите интервал для удаления из массива элементов: ");
	scanf("%d", &number);
	i = 0;
	m = SIZE;
	while (i < m)
	{
		if (array[i] == number)
		{
			m--;
			for (int j = i; j < m; j++)
			{
				array[j] = array[j + 1];
			}
		}
		else
			i++;
	}
	for (int i = 0; i < m; i++)
	{
		printf(" %d ", array[i]);
	}
	printf("\n");
	




	return 0;
}
