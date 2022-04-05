#include <iostream> //cout, endl
#include <stdio.h> //printf 사용
#include <string.h> //strcpy 사용
#include <string> //std::string 클래스 사용
using namespace std;

int main(void) {
	char cMunja[20];
	strcpy(cMunja, "c_insert");
	printf("%s\n", cMunja);

	std::string cppMunja;
	cppMunja = "cpp_insert";
	cout << cppMunja << endl;

	return 0;
}