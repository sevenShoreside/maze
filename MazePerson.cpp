#include"MazePerson.h"
#include"MazeMap.h"
#include<windows.h>
#include<iostream>
using namespace std;

MazePerson::MazePerson(int _positionX, int _positionY, char _personSymbol) :positionX(_positionX),positionY(_positionY),personSymbol(_personSymbol)
{
	preX = 10000;
	preY = 10000;
}
void MazePerson::goEast()
{
	preX = positionX;
	preY = positionY;
	positionY++;
}
void MazePerson::goSouth() 
{
	preX = positionX;
	preY = positionY;
	positionX++;
}
void MazePerson::goWest()
{
	preX = positionX;
	preY = positionY;
	positionY--;
}
void MazePerson::goNorth()
{
	preX = positionX;
	preY = positionY;
	positionX--;
}
void MazePerson::gotoxy(int x, int y)
{
	COORD cd;
	cd.X = x;
	cd.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cd);
}
bool  MazePerson::outOrNot()
{
	if (positionX == 0)
	{
		flag=true;
	}
	return flag;
}
void MazePerson::turnRight()
{
	switch (directionObj)
	{
	case East:directionObj=South; break;
	case South:directionObj = West; break;
	case West:directionObj = North; break;
	case North:directionObj = East; break;

	}
}
void MazePerson::goForward()
{
	switch (directionObj)
	{
	case East:goEast(); break;
	case South:goSouth(); break;
	case West:goWest();  break;
	case North:goNorth(); break;

	}
}
void MazePerson::personMove()
{
	if (MazeMap::wallOrNot(positionX,positionY))
	{
		switch(directionObj)
		{
		case East:goWest(); turnRight(); break;
		case South:goNorth(); turnRight(); break;
		case West:goEast(); turnRight();  break;
		case North:goSouth(); turnRight(); break;

		}
	}
	else
	{
		goForward();
	}
}

void  MazePerson::start()
{
	gotoxy(7, 1);
	while (!outOrNot())
	{
			personMove();
			if (!MazeMap::wallOrNot(positionX, positionY))
			{
				gotoxy(preX, preY);
				cout << ' ';
				gotoxy(positionX, positionY);
				cout << personSymbol;
			}
	}
	if (outOrNot())
	{
		cout << "¹§Ï²×ß³öÃÔ¹¬£¿£¡£¡" << endl;
	}
}
