#include <iostream>
using namespace std;

class Integer {
public:
	Integer(void) {}
	Integer(int v) : value(v) {

	}
	Integer operator+(const Integer& rhs);
	void print();

private:
	int value;
};