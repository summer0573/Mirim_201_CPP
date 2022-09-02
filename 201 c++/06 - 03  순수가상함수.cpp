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
	virtual void eat(void) override { cout << "È£¶ûÀÌ ³È³È" << endl; }
	virtual void eat(void) override { cout << "¾îÈï" << endl; }
	virtual void eat(void) override { cout << "È£¶ûÀÌ ´ç´ç" << endl; }
};

class Dog : public Animal {
public:
	virtual void eat(void) override { cout << "°­¾ÆÁö ³È³È" << endl; }
	virtual void eat(void) override { cout << "¸Û¸Û" << endl; }
	virtual void eat(void) override { cout << "°­¾ÆÁö ´ç´ç" << endl; }
};

void main(void) {
	Animal* animal = new Tiger(); //½ÇÃ¼°¡ ¾ø´Â °´Ã¼´Â »ý¼º ºÒ°¡
	delete animal;
}