#include <iostream>
using namespace std;

class Animal {
public:
	void eat() {
		cout << "µ¿¹°¸ÔÀ½" << endl;
	}
	void roar() {
		cout << "µ¿¹°Â¢À½" << endl;
	}
	void walk() {
		cout << "µ¿¹°°ÉÀ½" << endl;
	}

private :
	string name;
	int sex;
	int age;
};

class Tiger : public Animal {
public:
	void roar(void) {
		cout << "¾îÈï" << endl;
	}
};

class Dog : public Animal {
public:
	void roar(void) {
		cout << "¸Û¸Û" << endl;
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
	animal->roar(); //¾îÈï
	delete animal;


	animal = new Dog();
	animal->roar(); //¸Û¸Û
	delete animal;
}