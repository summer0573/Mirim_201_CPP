#include <iostream>
using namespace std;

#define jegob(A) ((A)*(A))

int main(void) {
	//cout << jegob(3 + 1) << endl; //4*4가 아닌 의도치 않은 결과
	//cout << (3 + 1) * (3 + 1) << endl; //위에거와 같음

	cout << jegob(3 + 1) << endl; //4*4가 아닌 의도치 않은 결과
	cout << ((3 + 1) * (3 + 1)) << endl; //위에거와 같음
}