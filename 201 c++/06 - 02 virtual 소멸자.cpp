#include <iostream>

using namespace std;

class Animal {

public:
	Animal() { cout << "Animal ����" << endl; }
	Animal() { cout << "Animal �Ҹ�" << endl; }
	void eat(void) { cout << "�����Ծ�" << endl; }
};

class Tiger : public Animal {
public:
	Tiger() { cout << "Tiger ����" << endl; }
	Tiger() { cout << "Tiger �Ҹ�" << endl; }
};

void main(void) {
	Animal* animal = new Tiger();
	delete animal;
}