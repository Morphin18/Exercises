// Самая длинная строка в массиве

#include "stdafx.h"
#include <windows.h>


#define n 5


int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	char s[n][20] = {
		            " ",
		            "I glad to see you",
					"You are nice",
					"Its okey",
					"lump is blue"
	};
	int count = 0;
	int max_string = 0;
	for (int i = 0; i < n-1; i++)
	{
		printf("%s \n", &s[i][20]);
	}
	for (int i = 1; i < n; i++)
	{
	
			count = strlen(s[i]);
			if (max_string < count)
			{
				max_string = count;
				printf("\nСтрока максимальной длины - [%d] , %s",i, s[i]);
			}
		
	}
	


	return 0;
}
