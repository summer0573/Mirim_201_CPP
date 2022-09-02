#include <iostream>
#include <string>

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
	void eat(void) override { cout << "È£¶ûÀÌ ³È³È" << endl; }
	void roar(void) override { cout << "¾îÈï" << endl; }
	void walk(void) override { cout << "È£¶ûÀÌ ´ç´ç" << endl; }

};

class Dog : public Animal {
public:
	void eat(void) override { cout << "°³ ÂÁÂÁ" << endl; }
	void roar(void) override { cout << "¸Û¸Û" << endl; }
	void walk(void) override { cout << "°³ »ç»Ó" << endl; }
};

void main(void)
{
	//Animal* animal = new Animal();	//½ÇÃ¼°¡ ¾ø´Â °´Ã¼´Â »ý¼ººÒ°¡
	Animal* animal = new Tiger();
	delete animal;
}