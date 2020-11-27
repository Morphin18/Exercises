// Найти сумму элементов между минимальным и максимальным элементами массива

#include "stdafx.h"
#include <windows.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int array[SIZE], i, sum, min, max, number;
	sum = 0;
	number = 0;
	min = 0;
	max = 0;
	srand(unsigned(time(NULL)));
	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand() %  + 99;
		printf(" %d ", array[i]);
	}
	for (i = 0; i < SIZE; i++)
	{
		if (array[i] < array[min]) min = i;
		else
			if (array[i] > array[max]) max = i;
	}
	if (min > max)
	{
		i = min;
		min = max;
		max = i;
	}
	for (i = min+1; i < max; i++)
	{
		sum += array[i];
	}
	
	printf("\nМинимальная: %d", array[min]);
	printf("\nМаксимальная: %d", array[max]);
	printf("\nСумма элементов: %d", sum);

	return 0;
}
