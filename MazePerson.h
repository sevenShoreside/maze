enum direction
{
	East, South, West, North

};
class MazePerson
{
public:
	MazePerson(int _positionX,int _positionY,char _personSymbol);//初始化person初始位置和标志
	void goEast();
	void goSouth();
	void goWest();
	void goNorth();
	void goForward();
	void start();
	void gotoxy(int x, int y);
	bool outOrNot();
	void turnRight();
	void personMove();
private:
	int positionX;
	int positionY;
	int preX;
	int preY;
	char personSymbol;
	bool flag=false;
	direction directionObj=North;
};
