#include <stdlib.h>
#include <string>
#include "MazeMap.h"
#include"MazePerson.h"
#include<iostream>
using namespace std;
#define WALL "*"
#define ROAD " "
int main(void)
{
	string map[8][9] = {
					{WALL,WALL,WALL,WALL,WALL,WALL,WALL,ROAD,WALL},
					{WALL,WALL,WALL,WALL,WALL,WALL,WALL,ROAD,WALL},
					{WALL,WALL,WALL,WALL,WALL,WALL,WALL,ROAD,WALL},
					{WALL,WALL,WALL,WALL,WALL,WALL,WALL,ROAD,WALL},
					{WALL,WALL,ROAD,ROAD,ROAD,ROAD,WALL,ROAD,WALL},
					{WALL,WALL,ROAD,WALL,WALL,ROAD,ROAD,ROAD,WALL},
					{WALL,ROAD,ROAD,WALL,WALL,WALL,WALL,WALL,WALL},
					{WALL,ROAD,WALL,WALL,WALL,WALL,WALL,WALL,WALL}
	};
	MazeMap maze;
	maze.coutMapArr(&map[0][0],8,9);
	MazePerson person(7,1,'*');
	person.start();
	system ("pause");
	return 0;
}