// Найти два наименьших эллемента

#include "stdafx.h"
#include <windows.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int array[SIZE], min_one, min_second;


	srand(unsigned(time(NULL)));
	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand() % 15 + 2;
	}

	min_one = array[0];
	min_second = array[0];

	for (int i = 0; i < SIZE; i++)
	{
			if (array[i] < min_one) min_one = array[i];
		    
	}
	for (int i = 0; i < SIZE; i++)
	{
		if (array[i] < min_second && array[i] != min_one) min_second = array[i];

	}
	
	for (int i = 0; i < SIZE; i++)
	{
		printf(" %d ", array[i]);
	}
	printf("\n");
	printf("Минимальный элемент - %d \n", min_one);
	printf("Минимальный элемент2 -  %d \n", min_second);




	return 0;
}
