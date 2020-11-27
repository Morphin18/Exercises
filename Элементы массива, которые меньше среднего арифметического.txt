// Найти в массиве те элементы, значение которых меньше среднего арифметического, взятого от всех элементов массива.

#include "stdafx.h"
#include <windows.h>
#include <stdlib.h>

#define SIZE 10

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int array[SIZE];
	int sum = 0;
	int averange = 0;

	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand() % + 9;
		sum += array[i];
	}
	averange = sum / SIZE;

	for (int i = 0; i < SIZE; i++)
	{
		printf(" %d ", array[i]);
	}
	printf("\n");
	printf(" %d ", averange);
	printf("\n");
	for (int i = 0; i < SIZE; i++)
	{
		if (array[i] < averange) printf(" %d ", array[i]);
	}

	return 0;
}
