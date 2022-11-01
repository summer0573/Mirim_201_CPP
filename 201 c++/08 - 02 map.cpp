include <iostream>
#include <string>
#include <map>

using namespace std;

// 우영우 : 박은빈
// 정명석 : 강기영
// 권민우 : 주종혁
// 이준호 : 강태오

void main(void)
{
	/*
	int arr[] = { 10, 20, 30, 40 };
	for (auto x : arr)
		x = x + 1;*/

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

//#include <iostream>
//#include <string>
//#include <map>
//
//using namespace std;
//
//void main(void)
//{
//	map<string, string> MF;	// MF : 마이 패밀리
//	MF["엄마"] = "고명숙";
//	MF["아빠"] = "정석택";
//	MF["언니"] = "정가을";
//	MF["오빠"] = "정태건";
//
//	for (auto& iter : MF) {
//		cout << "우리 " << iter.first << "는/은" << iter.second << endl;
//	}
//}
