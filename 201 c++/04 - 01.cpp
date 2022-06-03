#include <iostream>
#include "04 - 01.h"
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