#include <iostream>
#include <string>
#include <map>

using namespace std;

// �쿵�� : ������
// ���� : ���⿵
// �ǹο� : ������
// ����ȣ : ���¿�

void main(void)
{
	map<string, string> IBW;	// IBW : �̻��� ��ȣ�� �쿵��
	IBW["�쿵��"] = "������";
	IBW["����"] = "���⿵";
	IBW["�ǹο�"] = "������";
	IBW["����ȣ"] = "���¿�";

	// vector�� ��� ���� ���(�ݺ���)
	map<string, string>::iterator iter;
	for (iter = IBW.begin(); iter != IBW.end(); iter++)
		cout << iter->first << "�� " << iter->second << "��" << endl;

	cout << "����� ���ΰ��� " << IBW["�쿵��"] << endl;
}