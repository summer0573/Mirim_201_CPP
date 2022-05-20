#include <iostream>
#include <string.h>
using namespace std;

class Person { //상속하는 클래스
private: //멤버 변수
	string sName;
	int nAge;
public: //멤버 함수
	Person();
	Person(string name, int age);
	void hi();
};

class Student : public Person{ //상속 받을 클래스
private :
	int nHakbun;
public:
	Student();
	Student(string name, int age, int kanbun);
	void study();
};

Student::Student() : Person() {
	nHakbun = 0;	
}

Student::Student(string name, int age, int hakbun)
	: Person(name, age), nHakbun(hakbun) {
	
}

void Student::study() {
	hi();
	cout << "학번 : " << nHakbun << endl;
}

Person::Person() {
	sName = "익명";
	nAge = 0;
}

Person::Person(string name, int age)
	:sName(name), nAge(age){
	}

void Person::hi() {
	cout <<"이름 : " << sName << endl;
	cout <<"나이 : " << nAge << endl;
}

int main(void) {

	Person per = Person("이용복", 22);
	per.hi();

	cout << "--------------" << endl;

	Person* per2 = new Person("정현진", 18);
	per2 -> hi(); //포인터 new... 일시, 화살표(->)로 hi 호출

	cout << "--------------" << endl;

	Person* per3 = new Person[5];
	per3[0].hi(); //배열일시, 점(.) 으로 hi 호출

	cout << "--------------" << endl;

	Student stu2 = Student("정현진", 18, 2111);
	stu2.study();

	delete per2;
	delete[] per3;
	return 0;
}