#include <iostream> //cout, endl
#include <stdio.h> //printf 사용
#include <string.h> //strcmp 사용
#include <string> //std::string 클래스 사용
using namespace std;

int main(void) {
	char cl[10] = "aaa";
	printf("%d\n", strlen(cl)); //3

	string cppl = "aaa";
	cout << cppl.size() << endl; //3
	cout << cppl.length() << endl; //.size()와 같은 글자

	return 0;
}