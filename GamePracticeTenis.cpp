// GamePractice.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "windows.h"
#include "conio.h"

using std::cout;
using std::endl;
using std::cin;


int i, j, stop, x, y;
	int const h = 28;
	int const w = 50;
	char a[h][w];
	

	void setup() {
		stop = false;


	}
	
	enum colors {

		Black = 0,
		Blue = 1,
		Green = 2,
		Cyan = 3,
		Red = 4,
		Magenta = 5,
		Brown = 6,
		LightGray = 7,
		DarkGray = 8,
		LightBlue = 9,
		LightGreen = 10,
		LightCyan = 11,
		LightRed = 12,
		LightMagenta = 13,
		Yellow = 14,
		White = 15




	};


	void gotoxy(int i,int j) {

		HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD coord;
		coord.X = i;
		coord.Y = j;
		SetConsoleCursorPosition(hcon, coord);
		CONSOLE_CURSOR_INFO info;
		GetConsoleCursorInfo(hcon, &info);
		info.bVisible = FALSE;
		SetConsoleCursorInfo(hcon, &info);
	}

	void color(int i, int j) {

		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, i << 4 | j);
   



}

	void ground() {

		for (i = 0; i < h; i++) {
			for (j = 0; j < w; j++) {
				if (i == 0 || i == h - 1 || j == 0 || j == w - 1) {
					a[i][j] = char(219);
				}
				else 	a[i][j] = ' ';
				if (j == w / 2 && i > 0 && j == w / 2 && i < h-1) {

					a[i][j] = '|';
					
				}
			
				
				
			} 
		}
		
		


	}

	void playercars() {

		
		
	}

	void show() {

		gotoxy(0, 0);


	
		for (i = 0; i < h; i++) {
			
			for (j = 0; j < w; j++) {
				
				cout << a[i][j]; 
			

			}
			cout << endl;
		}

		
		

	}



	void input() {

		if (_kbhit()) {

			char press = _getch();
			
			if (press == 'w') y--;
		/*	if (press == 's')
			if (press == 'a')
			if (press == 'd')*/


		}



}












int main()
{
	setup();

	while (!stop) {

		input();
		ground();
		show();
	
		





	}
	
    return 0;
}

