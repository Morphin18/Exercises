
#include "stdafx.h"
#include <windows.h>
#include <stdlib.h>

#define SIZE 10

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int max = 0;
	int array[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand() % + 9;
	}



	for (int i = 0; i < SIZE; i++)
	{
		printf(" [%d] ", i);
	}
	printf("\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("  %d  ", array[i]);
	}
	printf("\n");

	for (int i = 2; i < SIZE; i += 2)
	{
		if (array[i] > array[max]) max = i;
	}

	printf("[%d] %d\n", max, array[max]);

	return 0;
}
