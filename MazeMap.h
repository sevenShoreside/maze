#include<string>
#define Aheight 100
#define Awidth 100
using namespace std;
class MazeMap
{
public:
	MazeMap();
	static bool wallOrNot(int row, int column);
	void coutMapArr(string *mazeMap,int row,int column);//��������Թ��ĺ���
	static string mapArr[Aheight][Awidth];
};

