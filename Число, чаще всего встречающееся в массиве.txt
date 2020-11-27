// Число, чаще всего встречающееся в массиве

#include "stdafx.h"
#include <windows.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int array[] = { 1,4,1,6,6,1 }; 
	int i, count, number, max_count;
	number = 0;
	max_count = 1;
	srand(unsigned(time(NULL)));
	for (i = 0; i < SIZE; i++)
	{
		array[i] = rand() %  + 9;
		printf(" %d ", array[i]);
	}

	for (i = 0; i < SIZE; i++)
	{
		count = 1;
		for (int j = i; j < SIZE-1; j++)
		{
			if (array[i] == array[j+1])
			{
				count++;
				if (count > max_count)
				{
					max_count = count;
					number = array[i];
				}
			}
		}
	}

	printf("\nВстречается %d раза число %d", max_count, number);

	return 0;
}
