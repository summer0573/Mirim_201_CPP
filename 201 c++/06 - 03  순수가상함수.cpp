#include <iostream>

using namespace std;

class Animal {

public:
	virtual void eat(void) = 0;
	virtual void roar(void) = 0;
	virtual void walk(void) = 0;

private:
	string name;
	int sex;
	int age;

};


class Tiger : public Animal {
public:
	virtual void eat(void) override { cout << "ȣ���� �ȳ�" << endl; }
	virtual void eat(void) override { cout << "����" << endl; }
	virtual void eat(void) override { cout << "ȣ���� ���" << endl; }
};

class Dog : public Animal {
public:
	virtual void eat(void) override { cout << "������ �ȳ�" << endl; }
	virtual void eat(void) override { cout << "�۸�" << endl; }
	virtual void eat(void) override { cout << "������ ���" << endl; }
};

void main(void) {
	Animal* animal = new Tiger(); //��ü�� ���� ��ü�� ���� �Ұ�
	delete animal;
}