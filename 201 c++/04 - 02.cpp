#include <iostream>
#include "04 - 02.h"
using namespace std;

Integer Integer :: operator + (const Integer& rhs) {
	Integer temp;
	temp.value = value + rhs.value;

	return temp;
}

void Integer::print()
{
	cout << value << endl;
}