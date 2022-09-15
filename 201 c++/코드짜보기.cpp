#include <iostream>
#include <string>

using namespace std;

template <typename St, typename In> // ���ø� St = string In = int

class Character {
public:
	Character(St _name, In _HP, In _attack, In _defense)
		:name(_name), HP(_HP), attack(_attack), defense(_defense) {}

	void print() {
		cout << "�̸� : " << name << endl;
		cout << "HP : " << HP << endl;
		cout << "���� : " << attack << endl;
		cout << "��� : " << defense << endl;
	}
private:
	St name; //�̸�
	In HP; //ü��
	In attack; //����
	In defense; //���
};

int main(void) {
	Character<string, int>* c = new Character<string, int>("������", 100, 60, 30);

	c->print(); //���
	delete c;

	return 0;
}