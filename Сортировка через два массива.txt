// Сортировка через два массива

#include "stdafx.h"
#include <windows.h>
#include <time.h>


#define N  5
#define M  5
#define SIZE  5


int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a[N], b[M], temp;
	for (int i = 0; i < N; i++)
	{
		a[i] = rand() % +99;
		b[i] = rand() % +99;
	}
	for (int i = 0; i < N; i++)
	{
		printf(" %d", a[i]);
	}
	printf("\n");
	for (int i = 0; i < M; i++)
	{
		printf(" %d", b[i]);
	}
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			for (int k = 0; k < SIZE; k++)
			{
				if (a[j] > b[k])
				{
					temp = a[j];
					a[j] = b[k];
					b[k] = temp;
				}
			}
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE-1; j++)
		{
			if (a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
			if (b[j] > b[j + 1])
			{
				temp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp;
			}
		}
	}
	printf("\nОтсортированный №1: ");
	for (int i = 0; i < N; i++)
	{
		printf(" %d", a[i]);
	}
	printf("\nОтсортированный №2: ");
	for (int i = 0; i < M; i++)
	{
		printf(" %d", b[i]);
	}



	return 0;
}
