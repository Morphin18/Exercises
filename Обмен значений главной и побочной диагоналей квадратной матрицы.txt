// Обмен значений главной и побочной диагоналей квадратной матрицы

#include "stdafx.h"
#include <windows.h>
#include <time.h>

#define SIZE 10


int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int array[SIZE][SIZE], temp;
	srand(unsigned(time(NULL)));
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			array[i][j] = rand() % 50 + 20;
			printf(" %d ", array[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (i == j)
			{
				temp = array[i][j];
				array[i][j] = array[i][SIZE - 1 - j];
				array[i][SIZE - 1 - j] = temp;
			}
			printf(" %d ", array[i][j]);
		}
		printf("\n");
	}

	return 0;
}
