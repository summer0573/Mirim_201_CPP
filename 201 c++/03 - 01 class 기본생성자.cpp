#include <iostream> //cout, endl
#include <string.h> //strcpy() 사용
using namespace std;


class Student {
private:
	int nHakbun;
	char* sName;

	//생성자: 객체가 생성되면 자동으로 호출되는 함수
	//반환형을 갖고있지 않는다.
public:
	Student();
	Student(int Hakbun, const char* Name);
	Student(const Student& rhs);
	~Student();

};

	Student::Student()
	{
	}
	Student::Student(int Hakbun, const char* Name)
		// 객체생성과 동시에 멤버변수 초기화 // 멤버변수(매개변수)
		// const/참조형 멤버변수를 사용할 수 있다.
		: nHakbun(Hakbun)
	{
		cout << "일반생성자 호출" << endl;
		int len = strlen(Name) + 1;
		sName = new char[len];
		strcpy(sName, Name);
	}
	// 직접 작성 안해도 컴파일러가 알아서 만들어주는 복사 생성자
	Student::Student(const Student& rhs)
		:nHakbun(rhs.nHakbun), sName(rhs.sName)
	{
}

	Student :: ~Student()
	{
		delete[]sName;
		cout << "소멸자 호출" << endl;
	}

	void Student::show(void)
	{
		cout << "학번은 " << nHakbun << "입니다." << endl;
		cout << "이름은 " << sName << "입니다." << endl << endl;

	}

int main(void) {
	//일반생성자 호출
	Student stu1 = Student(2111, "JHJ");
	//(1111,"JHJ")
	Student stu2 = stu1;
	stu1.show();
	return 0;
}