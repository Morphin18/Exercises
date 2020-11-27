//Записать текст в файл и считать с файла с помощью функций

#include "stdafx.h"
#include <windows.h>

#define SIZE 1000

int save_file(char* filename, char* mode);
int load_file(char* filename, char* mode);
int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	save_file("text.txt", "w");
	load_file("text.txt", "r");


	return 0;
}
int save_file(char* filename, char* mode) {
	FILE* file = NULL;
	char ch;
	if ((file = fopen(filename, mode)) == NULL) {
		perror("The file isn't opening");
		return 1;
	}
	else {
		while (ch = getchar()) {
			if (ch == 'q') break;
			fprintf(file, "%c", ch);
			setbuf(file, NULL);
		}
	}
	fclose(file);
	system("cls");
	return 0;
}
int load_file(char* filename, char* mode) {
	FILE* file = NULL;
	char ch;
	char* ptr = &ch;
	if ((file = fopen(filename, mode)) == NULL) {
		perror("The file isn't opening");
		return 1;
	}
	else {
		while (fscanf(file, "%c", ptr) == 1) {
			printf("%c", ch);
		}

	}
	fclose(file);
	return 0;
}