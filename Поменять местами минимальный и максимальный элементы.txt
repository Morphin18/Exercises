// Поменять местами минимальный и максимальный элементы

#include "stdafx.h"
#include <windows.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int array[SIZE], i, min, max, buff;
	min = 0;
	max = 0;
	buff = 0;
	srand(unsigned(time(NULL)));
	for (i = 0; i < SIZE; i++)
	{
		array[i] = rand() %  + 99;
		printf(" %d ", array[i]);
	}
	for (i = 0; i < SIZE; i++)
	{
			if (array[i] < array[min]) min = i;
			else if (array[i] > array[max]) max = i;
	
	}
	printf("\nМинимальное значение %d\nМаксимальное значение %d", array[min], array[max]);
	buff = array[min];
	array[min] = array[max];
	array[max] = buff;
	printf("\n");
	for (i = 0; i < SIZE; i++)
	{
		printf(" %d ", array[i]);
	}
	return 0;
}
