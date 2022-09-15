#include <iostream>
#include <string>

using namespace std;

template <typename St, typename In> // 템플릿 St = string In = int

class Character {
public:
	Character(St _name, In _HP, In _attack, In _defense)
		:name(_name), HP(_HP), attack(_attack), defense(_defense) {}

	void print() {
		cout << "이름 : " << name << endl;
		cout << "HP : " << HP << endl;
		cout << "공격 : " << attack << endl;
		cout << "방어 : " << defense << endl;
	}
private:
	St name; //이름
	In HP; //체력
	In attack; //공격
	In defense; //방어
};

int main(void) {
	Character<string, int>* c = new Character<string, int>("정현진", 100, 60, 30);

	c->print(); //출력
	delete c;

	return 0;
}