#include <iostream>

using namespace std;

class Animal {

public:
	Animal() { cout << "Animal ����" << endl; }
	virtual ~Animal() { cout << "Animal �Ҹ�" << endl; }
	void eat(void) { cout << "�����Ծ�" << endl; }
};

class Tiger : public Animal {
public:
	Tiger() { cout << "Tiger ����" << endl; }
	virtual ~Tiger() { cout << "Tiger �Ҹ�" << endl; }
};

void main(void) {
	Animal* animal = new Tiger();
	delete animal;
}