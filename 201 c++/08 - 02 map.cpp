#include <iostream>
#include <string>
#include <map>

using namespace std;

// 우영우 : 박은빈
// 정명석 : 강기영
// 권민우 : 주종혁
// 이준호 : 강태오

void main(void)
{
	map<string, string> IBW;	// IBW : 이상한 변호사 우영우
	IBW["우영우"] = "박은빈";
	IBW["정명석"] = "강기영";
	IBW["권민우"] = "주종혁";
	IBW["이준호"] = "강태오";

	// vector의 모든 원소 출력(반복자)
	for (auto& iter : IBW) {
	cout << iter.first << "역 " << iter.second << "분" << endl;
}


	cout << "드라마의 주인공은 " << IBW["우영우"] << endl;
}