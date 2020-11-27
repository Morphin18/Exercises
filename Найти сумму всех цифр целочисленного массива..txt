// Найти сумму всех цифр целочисленного массива. Например, если дан массив [12, 104, 81], то сумма всех его цифр будет равна 1 + 2 + 1 + 0 + 4 + 8 + 1 = 17.

#include "stdafx.h"
#include <windows.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int array[SIZE], i, sum;
	i = 0;
	sum = 0;
	srand(unsigned(time(NULL)));
	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand() % 999 + 10;
		printf(" %d ", array[i]);
	}
	while (array[i] > 0)
	{
		sum += array[i] % 10;
		array[i] /= 10;
		if (array[i] == 0) i++;
	}
	printf("\nСумма всех цифр: %d", sum);

	return 0;
}
