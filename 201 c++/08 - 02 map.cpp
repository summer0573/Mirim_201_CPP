include <iostream>
#include <string>
#include <map>

using namespace std;

// �쿵�� : ������
// ���� : ���⿵
// �ǹο� : ������
// ����ȣ : ���¿�

void main(void)
{
	/*
	int arr[] = { 10, 20, 30, 40 };
	for (auto x : arr)
		x = x + 1;*/

	map<string, string> IBW;	// IBW : �̻��� ��ȣ�� �쿵��
	IBW["�쿵��"] = "������";
	IBW["����"] = "���⿵";
	IBW["�ǹο�"] = "������";
	IBW["����ȣ"] = "���¿�";

	// vector�� ��� ���� ���(�ݺ���)
	for (auto& iter : IBW) {
	cout << iter.first << "�� " << iter.second << "��" << endl;
}

	cout << "����� ���ΰ��� " << IBW["�쿵��"] << endl;
	
}

//#include <iostream>
//#include <string>
//#include <map>
//
//using namespace std;
//
//void main(void)
//{
//	map<string, string> MF;	// MF : ���� �йи�
//	MF["����"] = "����";
//	MF["�ƺ�"] = "������";
//	MF["���"] = "������";
//	MF["����"] = "���°�";
//
//	for (auto& iter : MF) {
//		cout << "�츮 " << iter.first << "��/��" << iter.second << endl;
//	}
//}
