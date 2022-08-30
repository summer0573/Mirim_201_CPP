#include <iostream>
using namespace std;

class Animal {
public:
	void eat() {
		cout << "��������" << endl;
	}
	void roar() {
		cout << "����¢��" << endl;
	}
	void walk() {
		cout << "��������" << endl;
	}

private :
	string name;
	int sex;
	int age;
};

class Tiger : public Animal {
public:
	void roar(void) {
		cout << "����" << endl;
	}
};

class Dog : public Animal {
public:
	void roar(void) {
		cout << "�۸�" << endl;
	}
};

void main(void) {
	/*
	Animal animal;
	animal.roar();
	*/
	Animal* animal = new Animal;
	animal -> roar();
	delete animal;

	animal = new Tiger();
	animal->roar(); //����
	delete animal;


	animal = new Dog();
	animal->roar(); //�۸�
	delete animal;
}