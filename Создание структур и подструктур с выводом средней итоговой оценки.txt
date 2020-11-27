//Создание структур и подструктур с выводом средней итоговой оценки

#include "stdafx.h"
#include <windows.h>




#define MAX 15

struct person {
	char* fname;
	char* sname;
};

struct subject {
	char* name_subjeects;
	int assessment;
};


struct university {
	struct subject subject_person;
	struct person names_person;
} mgu[MAX];


int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int average_value = 0;
	mgu[0].names_person = { "Micheal", "Malkin" };
	mgu[0].subject_person = { "Информатика", 4 };
	mgu[1].names_person = { "John", "Bush" };
	mgu[1].subject_person = { "Информатика", 3 };
	mgu[2].names_person = { "Daniel", "Assment" };
	mgu[2].subject_person = { "Информатика", 5 };
	mgu[3].names_person = { "Anna", "Kuprinova" };
	mgu[3].subject_person = { "Информатика", 3 };
	mgu[4].names_person = { "Kate", "Blunsh" };
	mgu[4].subject_person = { "Информатика", 4 };
	mgu[5].names_person = { "Mike", "Jakson" };
	mgu[5].subject_person = { "Информатика", 4 };
	mgu[6].names_person = { "Peter", "Jonson" };
	mgu[6].subject_person = { "Информатика", 5 };
	mgu[7].names_person = { "Vilianna", "Tora" };
	mgu[7].subject_person = { "Информатика", 3 };
	mgu[8].names_person = { "Franco", "Belusconi" };
	mgu[8].subject_person = { "Информатика", 3 };
	mgu[9].names_person = { "Karina", "Solderberg" };
	mgu[9].subject_person = { "Информатика", 5 };
	mgu[10].names_person = { "Bob", "Moris" };
	mgu[10].subject_person = { "Информатика", 2 };
	mgu[11].names_person = { "Micheal", "Malkin" };
	mgu[11].subject_person = { "Информатика", 4 };
	mgu[12].names_person = { "Kate", "Werber" };
	mgu[12].subject_person = { "Информатика", 5 };
	mgu[13].names_person = { "Klar", "Polanski" };
	mgu[13].subject_person = { "Информатика", 3 };
	mgu[14].names_person = { "Micheal", "Donald" };
	mgu[14].subject_person = { "Информатика", 4 };

	printf("--------Список студентов университета ------\n");
	for (int i = 0; i < MAX; i++)
	{
		printf("Студент: %s ", mgu[i].names_person.fname);
		printf("%s\n", mgu[i].names_person.sname);
		printf( "Предмет: %s\n", mgu[i].subject_person.name_subjeects);
		printf( "Итоговая оценка: %d\n", mgu[i].subject_person.assessment);
		printf("-------------------------------------------\n");
	}
	for (int i = 0; i < MAX; i++)
	{
		average_value += mgu[i].subject_person.assessment;
	}
	printf("Среднее значение итоговой оценки: %d", average_value / 14);

	return 0;
}
