// высчитать сколько букв в предложении

#include "stdafx.h"
#include <windows.h>





int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	char s[] = { "I glad to see you" };
	int MAX = strlen(s);
	int count = 0;
	for (int i = 0; i < MAX; i++)
	{
		if (s[i] != ' ')
		{
			count++;
		}
	}
	printf("Букв: %d", count);

	return 0;
}
