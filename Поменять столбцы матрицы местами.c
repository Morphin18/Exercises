// Поменять столбцы матрицы местами

#include "stdafx.h"
#include <windows.h>
#include <time.h>

#define SIZE 5


int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int array[SIZE][SIZE], temp, colum1, colum2;
	srand(unsigned(time(NULL)));
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			array[i][j] = rand() % + 9;
			printf(" %d ", array[i][j]);
		}
		printf("\n");
	}
	printf("\nКакие столбцы поменять местами? ");
	scanf("%d %d", &colum1, &colum2);
	for (int i = 0; i < SIZE; i++)
	{
		temp = array[i][colum1 - 1];
		array[i][colum1 - 1] = array[i][colum2 - 1];
		array[i][colum2 - 1] = temp;
	 }
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			printf(" %d ", array[i][j]);
		}
		printf("\n");
	}

	return 0;
}
