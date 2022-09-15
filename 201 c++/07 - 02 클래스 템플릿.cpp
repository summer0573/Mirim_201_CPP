#include <iostream>
#include <string>

using namespace std;

template <typename T>
class MyData {
public:
	void setData(T pdata) {
		mydata = pdata;
	}
	void getData() {

		return mydata;
	}

private:
	T mydata;
};

int main(void) {
	MyData<int> mydata1;
	MyData<double> mydata2;

	mydata1.setData(5);
	cout << mydata1.getData() << endl;

	mydata2.setData(5.5);
	cout << mydata2.getData() << endl;
}