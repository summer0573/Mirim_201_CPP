#include <iostream>
using namespace std;

class Point {
private:
	int mX;
	int mY;
public:
	Point(int mX, int mY); //생성자
	Point(void);

	//연산자 오버로딩
	Point operator+(const Point& rhs);

	void chul(void);

};

Point::Point(int mmX, int mmY) : mX(mmX), mY(mmY) { }
Point::Point() {}

Point Point::operator+(const Point& rhs)
{
	Point p;
	p.mX = mX + rhs.mX;
	p.mY = mY + rhs.mY;
	return p;
}

void Point::chul(void) {

	cout << mX << " " << mY << endl;
}

int main(void) {
	Point p1(1, 2);
	Point p2(3, 4);
	Point sum = p1 + p2;		//p1.operator+(p2);
	sum.chul(); //4, 6

	return 0;
}

