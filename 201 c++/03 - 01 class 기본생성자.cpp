#include <iostream> //cout, endl
using namespace std;


class Student {
private:
	int nHakbun;
	string sName;

	//생성자: 객체가 생성되면 자동으로 호출되는 함수
	//반환형을 갖고있지 않는다.
public:
	Student();
	Student(int Hakbun, string eName);
	void show();
};

Student::Student() {
	this->nHakbun = 1234;
	this->sName = "이사랑";
	cout << "학번이 등록되었습니다." << endl;
}
	
	Student::Student(int hakbum, string mane){
		//:noboolalpha, sBame(mane);
}

Student::Student(int Hakbun, string eName) {
	this -> nHakbun = Hakbun;
	this -> sName = eName;
}

void Student::show() {
	cout << "학번은 " << nHakbun << "입니다" << endl;
	cout << "이름은 " << sName << "입니다" << endl << endl;
}


int main(void) {

	Student* stu2 = new Student(2111,"JHJ");
	stu2 -> show();

	delete stu2;

	return 0;
}