// Суммы строк и столбцов матрицы


#include "stdafx.h"
#include <windows.h>
#include <time.h>

#define SIZE 20

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int array[SIZE][SIZE];
	int line[SIZE] = { 0 };
	int colum[SIZE] = { 0 };
	srand(unsigned(time(NULL)));
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			array[i][j] = rand() % +9;
			line[i] += array[i][j];
			colum[j] += array[i][j];
			printf(" %d ", array[i][j]);
		}
		printf(" %d ", line[i]);
		printf("\n");
	}
	printf("\n");
	for (int j = 0; j < SIZE; j++)
	{
		printf("%d ", colum[j]);
	}

	return 0;
}
