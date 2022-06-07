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

Integer Integer :: operator + (const Integer & rhs){
	Integer temp;
	temp.value = value + rhs.value;

	return temp;
}

void Integer::print()
{
	cout << value << endl;
}

int main(void) {
	Integer a = Integer(1);
	Integer b = Integer(2);
	Integer c = a + b;
	c.print();

	return 0;
}

