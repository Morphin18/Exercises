// Определить строки матрицы, в которых число 5 встречается 3 и более раз

#include "stdafx.h"
#include <windows.h>
#include <time.h>

#define SIZE 20


int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int array[SIZE][SIZE], count;
	srand(unsigned(time(NULL)));
	for (int i = 0; i < SIZE; i++)
	{
		count = 0;
		for (int j = 0; j < SIZE; j++)
		{
			array[i][j] = rand() % + 9;
			printf(" %d ", array[i][j]);
			if (array[i][j] == 5) count++;
		}
		if (count >= 3) printf(" %d", i);
		printf("\n");
	}


	return 0;
}
