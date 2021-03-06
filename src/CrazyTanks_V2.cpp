#include "stdafx.h"
#include "DisplayCreator.h"
#include "UpdateDisplay.h"
#include "Tank.h"
#include "GameController.h"
#include "Wall.h"


int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	DisplayCreator screen;

	SMALL_RECT minWindow[4] = { 0, 0, screen.WINDOW_SIZE.X,  screen.WINDOW_SIZE.Y };
	COORD maxWindow = { screen.WINDOW_SIZE.X + 1, (screen.WINDOW_SIZE.Y + 1) };
	HANDLE out_handle = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleWindowInfo(out_handle, true, minWindow);
	SetConsoleScreenBufferSize(out_handle, maxWindow);
	SetConsoleWindowInfo(out_handle, true, minWindow);

	auto controller = GameController();
	system("pause");

    return 0;
}

