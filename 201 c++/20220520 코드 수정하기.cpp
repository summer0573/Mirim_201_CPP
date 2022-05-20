#include <iostream>
#include <string.h>
using namespace std;

class CBox {
//private:
//	double width;

public:
	double width;
};

class ChildBox : CBox {
public : 
	void setwidth(double w) {
		width = w;
	}
};

/*
private : 다 - 클래스 내부에서만 접근 가능하며 클래스 외부에서는 접근할 수 없으므로 은닉할 정보에 붙인다.
클래스를 생성할 때 디폴트로 지정 된다.
protected : 나 - 클래스의 내부, 상속 관계에 있는 클래스에서만 접근할 수 있다.
public  : 가 - 어디에서든 자유롭게 참조할 수 있으며 외부에서 직접 멤버를 조작할 수 있으므로 은닉할 정보에
붙이면 안된다.
*/