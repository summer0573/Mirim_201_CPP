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