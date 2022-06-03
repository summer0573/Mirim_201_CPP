#include <iostream>
using namespace std;

class Point {
private:
	int mX;
	int mY;
public:
	Point(int mX, int mY);
	void chul(void);

};

Point::Point(int mmX, int mmY) : mX(mmX), mY(mmY)
{

}

void Point::chul(void) {

	cout << mX << " " << mY << endl;
}

int main(void) {
	Point p1(1, 2);
	p1.chul();

	return 0;
}

