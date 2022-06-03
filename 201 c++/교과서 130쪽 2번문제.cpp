#include <iostream>
using namespace std;

class CBank {
private : 
	string name;
	string account;
	int balance;

public:
	//생성자 작성
	//입금되는 금액을 출력하는 함수 작성
	CBank();
	CBank(string name2, string account2, int balance2);
	void Deposit();
};

CBank::CBank() {

}

void CBank::Deposit() {
	cout << "이름 :" << name << endl;
	cout << "계좌번호 :" << account << endl;
	cout << "잔액 :" << balance << endl;
}

int main(void) {

	CBank a = CBank("정현진", "3021350428041", 190000);
	a.Deposit();

	return 0;
}