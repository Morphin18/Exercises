// Вставка элемента в произвольное место массива


#include "stdafx.h"
#include <windows.h>

#define SIZE 5


int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int array[5], count, number, j, buff;
	count = 0;
	number = 0;
	j = 0;
	buff = 0;
	for (int i = 0; i < SIZE-1; i++)
	{
		array[i] = rand() % +9;
		printf(" %d ", array[i]);
	}
	printf("\nЧисло ");
	scanf("%d", &number);
	printf("\nПозиция ");
	scanf("%d", &count);
	for (int i = SIZE-1; i >= count-1; i--)
	{
		array[i + 1] = array[i];
	
	}
	array[count - 1] = number;
	for (int i = 0; i < SIZE; i++)
	{
		printf(" %d ", array[i]);
	}
	return 0;
}
