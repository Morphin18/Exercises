// Сумма модулей элементов массива, расположенных после первого отрицательного

#include "stdafx.h"
#include <windows.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int array[SIZE], i, sum;
	srand(unsigned(time(NULL)));
	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand() % 30 - 5;
		printf(" %d ", array[i]);
	}
	i = 0;
	sum = 0;
	while (i < SIZE)
	{
		if (array[i] < 0)
		{
			i++;
			for (; i < SIZE; i++)
			{
				sum += abs(array[i]);
			}
		}
		i++;
	}
	
	printf("\nСумма %d ", sum);



	return 0;
}
