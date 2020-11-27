
#include "stdafx.h"
#include <windows.h>
#include <stdlib.h>

#define SIZE 10

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int sum = 0;
	int array[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand() % +9;
	}

	for (int i = 0; i < SIZE; i++)
	{
		if ((array[i] % 2) == 0)
		{
			sum += array[i];
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		printf(" %d ", array[i]);
	}
	printf("\n");
	printf("Sum: %d", sum);

	return 0;
}
