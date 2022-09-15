#include <iostream>
#include <string>

using namespace std;

template<typename T>

T sum(T x, T y) {
	T z = x + y;
	return z
}

int main(void) {
	cout << sum<int> << endl;
	cout << sum<double> << endl;
}