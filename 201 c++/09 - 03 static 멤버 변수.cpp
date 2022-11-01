#include <string>
#include <iostream>
using namespace std;


class Champ {
public :
	Champ(int age, const string& name);
	static int getCount(void) {
		//����, static ����Լ����� static ��������� ��밡��
		//_age++;
		return mCount;
		
	}

private:
	int _age;
	string _name;
	static int mCount;
};

int Champ::mCount = 0;

Champ::Champ(int age, const string& name)
	: _age(age), _name(name) {
	++mCount;
}

void main(void) {

	cout << Champ::getCount() << endl;

	Champ* teemo = new Champ(10, "Ƽ��");
	Champ* mai = new Champ(11, "����");
	Champ* veign = new Champ(14, "����");
	
	//static ������� mCount�� ��� ��ü�� �����Ѵ�.
	cout << teemo->getCount() << endl;
	cout << Champ::getCount() << endl;
}