#include <iostream>
#include <string>

using namespace std;

class Person {
public:
	string name;
	int hakbun;
	Person(string na, int ha) {
		name = na;
		hakbun = ha;
	}
	void printShow() {
		cout << "이름 : " << name << endl;
		cout << "학번 : " << hakbun << endl;
	}
};

class Student : public Person {
public:
	string university;
	Student(string nn, int hh, string uu) 
		: Person(nn, hh), university(uu)
	{

	}
	void printShow() {
		cout << "이름 : " << name << endl;
		cout << "학번 : " << hakbun << endl;
		cout << "대학 : " << university << endl;
	}
};

int main(void) {
	Student s = Student("JHJ", 2111, "중앙대");
	s.printShow();

	return 0;
}