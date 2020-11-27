// Максимальный элемент среди минимальных элементов столбцов матрицы

#include "stdafx.h"
#include <windows.h>
#include <time.h>

#define N 20
#define M 20

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int array[N][M], min[N];
	int max = 0;
	srand(unsigned(time(NULL)));
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			array[i][j] = rand() % 50 + 10;
			printf(" %d ", array[i][j]);
		}
		printf("\n");
	}
	for (int j = 0; j < M; j++)
	{
		min[j] = array[0][j];
		for (int i = 0; i < N; i++)
		{
			if (array[i][j] < min[j])
			{
				min[j] = array[i][j];
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
			if (min[i] > max) max = min[i];
	}
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf(" %d ", min[i]);
	}
	printf("\nМаксимальный элемент из минимальных %d ", max);

	return 0;
}
