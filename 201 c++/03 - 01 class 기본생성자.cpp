#include <iostream> //cout, endl
using namespace std;

class Student {
private:
	int nHakbun;
	string sName;

	//생성자: 객체가 생성되면 자동으로 호출되는 함수
	//반환형을 갖고있지 않는다.
public:
	Student() {
		nHakbun = 1234;
		sName = "이사랑";
		cout << "학번이 등록되었습니다." << endl;
	}
	//아래와 같은 생서자를 컴파일러가 만들어줌
	//Student() {}

	void show() {
		cout << "학번은" << nHakbun << "입니다" << endl;
		cout << "이름은" << sName << "입니다" << endl;
	}
};

int main(void) {
	Student stu;
	stu.show();
	return 0;
}