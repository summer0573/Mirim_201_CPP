#include <iostream>

using namespace std;

class Animal {

public:
	Animal() { cout << "Animal 积己" << endl; }
	Animal() { cout << "Animal 家戈" << endl; }
	void eat(void) { cout << "悼拱冈绢" << endl; }
};

class Tiger : public Animal {
public:
	Tiger() { cout << "Tiger 积己" << endl; }
	Tiger() { cout << "Tiger 家戈" << endl; }
};

void main(void) {
	Animal* animal = new Tiger();
	delete animal;
}