#include <iostream>
#include <string>

using namespace std;

/*
enum Food {
	KOREAN,
	JAPANESE,
	CHINESE,
	COUNT
};

void main(void)
{
	string food_spot[Food::COUNT];
	food_spot[Food::KOREAN] = "�����";
	food_spot[Food::JAPANESE] = "��Ű�丮 ��";
	food_spot[Food::CHINESE] = "��ȭ��";

	cout << "��������Ʈ" << endl;
	int menu = 1;
	switch (menu)
	{
	case Food::KOREAN:
		cout << "�ѽ� : ";
		break;
	case Food::JAPANESE:
		cout << "�Ͻ� : ";
		break;
	case Food::CHINESE:
		cout << "�߽� : ";
		break;
	}
	cout << food_spot[menu];
}*/

enum House {
	BED,
	TABLE,
	CHAIR,
	APARTMENT
};

void main(void)
{
	string myHome[House::APARTMENT];
	myHome[House::BED] = "���̽� ħ��";
	myHome[House::TABLE] = "���ΰ���";
	myHome[House::CHAIR] = "���ɾ�";

	cout << "���� �Ǹ���" << endl;
	int furniture = 1;
	switch (furniture)
	{
	case House::BED:
		cout << "ħ�� : ";
		break;
	case House::TABLE:
		cout << "���̺� : ";
		break;
	case House::CHAIR:
		cout << "���� : ";
		break;
	}
	cout << myHome[furniture];

}

/*
#include <iostream>
#include <string>

using namespace std;

void main(void)
{
	string food_spot[3];
	food_spot[0] = "�����";
	food_spot[1] = "��Ű�丮 ��";
	food_spot[2] = "��ȭ��";

	cout << "��������Ʈ" << endl;
	int menu = 1;
	switch(menu)
	{
	case 0:
		cout << "�ѽ� : ";
			break;
	case 1:
		cout << "�Ͻ� : ";
		break;
	case 2:
		cout << "�߽� : ";
		break;
	}
	cout << food_spot[menu];
}

*/