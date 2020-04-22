#include "MazeMap.h"
#include <iostream>
using namespace std;
MazeMap::MazeMap()
{
}
void MazeMap::coutMapArr(string* mazeMap, int row, int column)
{

	for (int i = 0; i <row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			mapArr[i][j] = *mazeMap;
			cout << *mazeMap;
			mazeMap++;
		}
		cout << endl;
	}
}
bool MazeMap::wallOrNot(int row, int column)
{
	if (mapArr[row][column] == "*")
	{
		return true;
	}
	else
	{
		return false;
	}
}