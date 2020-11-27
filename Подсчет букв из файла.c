//Подсчет букв из файла

#include "stdafx.h"
#include <windows.h>

#define SIZE 1000

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	FILE* bd = NULL;
	char ch;
	char* ptr = &ch;
	int count = 0;
	if ((bd = fopen("file.txt", "r")) == NULL) {
		perror("Error opening file");
		return 1; 
	}
	else {
		
	while (fscanf(bd,"%c", ptr) == 1) {
		if (!strchr(" ,.-!@#$%^&?:;", ch))
		{
			count++;
		}
		printf("%c", ch);
	
	}
	}
	fclose(bd);
	printf("\nКоличество символов:%5.d", count);

	return 0;
}
