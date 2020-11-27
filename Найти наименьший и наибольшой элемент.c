// Найти наименьший и наибольшой элемент

#include "stdafx.h"
#include <windows.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int array[SIZE];



	srand(unsigned(time(NULL)));
	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand() % 15 + 2;
	}
	int min = array[0];
	int max = array[0];
	for (int i = 0; i < SIZE; i++)
	{
		
			if (array[i] < min) min = array[i];
			if (array[i] > max) max = array[i];

	}

	for (int i = 0; i < SIZE; i++)
	{
		printf(" %d ", array[i]);
	}
	printf("\n");
	printf("Минимальный элемент %d \n", min);
	printf("Максимальный элемент %d ",  max);

	return 0;
}
