#include <iostream>
#include <string>
#include <map>

using namespace std;

void main(void)
{
	map<string, string> Transformers;	// IBW : �̻��� ��ȣ�� �쿵��
	Transformers["�����"] = "������ ī����";
	Transformers["��Ƽ�ӽ� ������"] = "���ͺ�Ʈ 379";
	Transformers["����"] = "��Ƽ�� �ֽ�Ƽ��";

	// vector�� ��� ���� ���(�ݺ���)
	map<string, string>::iterator iter;
	for (iter = Transformers.begin(); iter != Transformers.end(); iter++)
		cout << iter->first << "�� ������ " << iter->second << endl;

	Transformers.erase("����");


	cout << "��ȭ�� ������ " << Transformers["��Ƽ�ӽ� ������"] << endl;


}