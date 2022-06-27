#include <iostream>

using namespace std;

class m_string {

private:
	char *_Myptr; //문자열의 시작 주소를 담고 있는 포인터
	int _Mysize; // 문자열의 글자수
public:
	m_string(); //기본 생성자
	m_string(const char* ms); //문자열로부터 생성하는 생성자
	m_string(const m_string& ms); //복사생성자
	~m_string(); //소멸자
	m_string& operator = (const m_string& ms); //대입연산자
	m_string& operator += (const m_string& ms); //덧셈 연산자
	int operator == (const m_string& ms); //비교 연산자
	
	//문자열의 글자수를 반환
	int size();



	friend ostream& operator<<(ostream& os, const m_string& ms)
	{
		os << ms._Myptr;
		return os;
	}
};

int m_string::size() {

	return _Mysize;

}

int main(void)
{
	m_string str1 = "123";
	cout << str1 << " " << str1.size() << endl;

	m_string str2 = str1;
	cout << str2 << " " << str2.size() << endl;

	str2 = "m_string";
	cout << str2 << " " << str2.size() << endl;

	str2 = str2 + str1;
	cout << str2 << " " << str2.size() << endl;

	str2 = str2 + "ab";
	cout << str2 << " " << str2.size() << endl;

	cout << (str1 == "123") << endl;
	cout << (str1 == str2) << endl;

	return 0;
}

m_string::m_string()
{
	_Myptr = 0;
	_Mysize = NULL;

}

m_string::m_string(const char* ms)
{
	_Mysize = strlen(ms) + 1;
	_Myptr = new char[_Mysize];
	strcpy(_Myptr, ms);

}

m_string::m_string(const m_string& ms)
{
	_Mysize = ms._Mysize;
	_Myptr = new char[_Mysize];
	strcpy(_Myptr, ms._Myptr);
}

m_string::m_string()
{
	if (_Myptr != NULL)
		delete[]_Myptr;

}

m_string& m_string::operator= (const m_string& ms)
{
	if (_Myptr != NULL)
		delete[]_Myptr;
	_Mysize = ms._Mysize;
	_Myptr = new char[_Mysize];
	strcpy(_Myptr, ms._Myptr);
	return *this;
}

m_string& m_string::operator+= (const m_string& ms)
{
	char* temp = new char[_Mysize + ms._Mysize - 1];
	strcpy(temp, _Myptr);
	strcat(temp, ms._Myptr);

	if (_Myptr != NULL)
		delete[]_Myptr;
	_Myptr = temp;
	return *this;
}

bool m_string::operator == (const m_string& ms)
{
	return strcmp(_Myptr, ms._Myptr) ? false : true;
}

m_string m_string::operator + (const m_string& ms)
{
	char* temp = new char[_Mysize + ms._Mysize - 1];
	strcpy(temp, _Myptr);
	strcat(temp, ms._Myptr);

	m_string result(temp);
	delete[]temp;

	return result;
}

ostream& operator<< (ostream& os, const m_string& ms)
{
	os << ms._Myptr;
	return os;
}

istream& operator>> (istream& is, m_string& ms)
{
	char _Myptr[100];
	is >> _Myptr;
	ms = m_string(_Myptr);
	return is;
}
