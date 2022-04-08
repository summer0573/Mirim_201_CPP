#include <iostream> //cout, endl
#include <stdio.h> //printf 사용
#include <string.h> //strcmp 사용
#include <string> //std::string 클래스 사용
using namespace std;

int main(void) {
	char cl[] = "aaa", cj[] = "aaa", ck[] = "abc";
	printf("%d\n", strcmp(cl, cj) == 0); //같은 글자
	printf("%d\n", strcmp(cl, cj) < 0); //사전순 aaa -> abc

	string cppl = "aaa", cppj = "aaa", appk = "abc";
	cout << (cppl == cppj) << endl; //같은 글자
	cout << (cppl < cppj) << endl; //사전순 aaa -> abc

	return 0;
}