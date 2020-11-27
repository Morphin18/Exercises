// Замена подстроки

#include "stdafx.h"
#include <windows.h>
#include <cstringt.h>

#define SIZE 20

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	char str[SIZE] = { "I glad to see you" };
	char sep[SIZE] = " ";
	char *istr;
	char w[SIZE];
	char chance[SIZE];
	printf("%s\n", str);
	printf("Какое слово удалить? ");
	scanf("%s", w);
	printf("На какое слово заменить? ");
	scanf("%s", chance);
	for (istr = strtok(str, sep); istr != NULL; istr = strtok(NULL, sep))
	{
	
		if (strcmp(istr,w) == 0)
		{
			strcpy(istr, chance);
		}
		printf("%s ", istr);
		
	}

	


	return 0;
}
