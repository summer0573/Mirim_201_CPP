#include <iostream>
#include <string.h>
using namespace std;

class CBox {
private:
	double width;
};

class ChildBox : CBox {
public : 
	void setwidth(double w) {
		width = w;
	}
};