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

