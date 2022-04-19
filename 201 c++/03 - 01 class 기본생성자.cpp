#include <iostream> //cout, endl
using namespace std;

class Student {
private:
	int nHakbun;
	string sName;
	//아래와 같은 생서자를 컴파일러가 만들어줌
	//Student() {}
};

int main(void) {
	//기본 생성자
	Student student1;
	Student Student2 = Student();

	return 0;
}