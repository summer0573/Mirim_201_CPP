#include <iostream>
#include <string.h>

using namespace std;

class student {
private:
	int nHakbun;
	char* sName;

public:
	//생성자 : 객체가 생성되면 자동으로 호출되는 함수
	//반환형을 갖고있지 않는다.
	student();
	student(int Hakbun, const char* Name);
	student(const student& rhs);
	~student();
	student& operator=(const student& rhs);

	void show();

};

student::student() {


}
//멤버변수를 초기화 할 수 있으며 따라서
//const형 변수와 참조형 변수를 멤버변수로 할 수 있다

student::student(int Hakbun, const char* Name)
	:nHakbun(Hakbun) //멤버변수(매개변수)
{
	cout << "Student 일반생성자 호출." << endl;
	int len = strlen(Name) + 1; //널때문에 하나 추가, 공간의 갯수 파악
	sName = new char[len];		//갯수만큼 메모리 할당
	strcpy(sName, Name);
}

//직접 작성 안해도 컴파일러가 알아서 만들어주는
//복사생성자
student::student(const student& rhs)
	:nHakbun(rhs.nHakbun), sName(rhs.sName)
{
	cout << "Student 일반생성자 호출." << endl;
	int len = strlen(rhs.sName) + 1; //널때문에 하나 추가, 공간의 갯수 파악
	sName = new char[len];		//갯수만큼 메모리 할당
	strcpy(sName, rhs.sName);
}

student :: ~student()
{
	delete[]sName;
	cout << "Student 소멸자 호출." << endl;
}

void student::show() {
	cout << "학번은" << nHakbun << "입니다" << endl;
	cout << "이름은" << sName << "입니다" << endl << endl;
}

//대입연산자 오버로딩
student& student::operator=(const student& rhs)
{
	nHakbun = rhs.nHakbun;

	cout << "Student 대입연산자 호출." << endl;
	int len = strlen(rhs.sName) + 1; //널때문에 하나 추가, 공간의 갯수 파악
	sName = new char[len];		//갯수만큼 메모리 할당
	strcpy(sName, rhs.sName);

	return *this;
}

class highSchoolStudent : public student {
public:
	highSchoolStudent(int Hakbun,const char* Name, bool isD)
		: student(Hakbun, Name), isDormitory(isD)
	{
		cout << "HighSchoolStudent 생성자 호출" << endl;
	}


	~highSchoolStudent() {
		cout << "HighSchoolStudent 소멸자 호출." << endl;
	}


private :
	bool isDormitory;
};

int main(void) {

	highSchoolStudent hss = highSchoolStudent(2111, "JHJ", true);
	hss.show();

	return 0;
}