//открытие файла

#include "stdafx.h"
#include <windows.h>




#define MAX 10

struct person {
	char *fname;
	char *sname;
};

struct job {
	struct person names;
	char *jobs;
	int id;
};

struct company {
	struct job employer;
} IKEA[MAX];


int save_file();
int load_file();

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	

	load_file();


	return 0;
}
int save_file()
{
	FILE* bd;
	struct company* ptr;
	ptr = IKEA;
	if ((bd = fopen("Ikea.txt", "w+")) == NULL)
	{
		perror("Error openning file");
		getchar();
		return 1;
	}
	fprintf(bd, "--------Список сотрудников компании -------\n");
	for (ptr = &IKEA[0]; ptr < &IKEA[MAX]; ptr++)
	{
		fprintf(bd, "Сотрудник: %s ", ptr->employer.names.fname);
		fprintf(bd, "%s\n", ptr->employer.names.sname);
		fprintf(bd, "Специальность: %s\n", ptr->employer.jobs);
		fprintf(bd, "Порядковый номер: %d\n", ptr->employer.id);
		fprintf(bd, "-------------------------------------------\n");
	}
	fclose(bd);
	return 0;
}
int load_file()
{
	FILE* bd;
	char buffer[100];
	char* ptr;
	ptr = buffer;
	if ((bd = fopen("Ikea.txt", "r+")) == NULL)
	{
		perror("Error openning file");
		getchar();
		return 1;
	}
	while (!feof(bd))
	{
		fgets(ptr, 1000, bd);
		printf("%s", ptr);
	}
	fclose(bd);
	return 0;
}