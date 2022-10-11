#include <iostream>
#include <string>
#include <map>

using namespace std;

void main(void)
{
	map<string, string> Transformers;	// IBW : 이상한 변호사 우영우
	Transformers["범블비"] = "쉐보레 카마로";
	Transformers["옵티머스 프라임"] = "피터빌트 379";
	Transformers["재즈"] = "폰티악 솔스티스";

	// vector의 모든 원소 출력(반복자)
	map<string, string>::iterator iter;
	for (iter = Transformers.begin(); iter != Transformers.end(); iter++)
		cout << iter->first << "의 차량은 " << iter->second << endl;

	cout << "드라마의 대장은 " << Transformers["옵티머스 프라임"] << endl;


}