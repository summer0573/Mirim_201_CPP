#include <iostream>
#include <string>
#include <vector>		// vector STL 사용

using namespace std;

void main(void)
{
	// i1, i2 정적배열 : 크기가 고정된 배열
	int i1[10];
	int* i2 = new int[10];

	// i3 동적배열 : 크기가 변할 수 있는 배열
	vector<int> i3;
	i3.reserve(10);	// 벡터의 공간은 10개

	for (int i = 0; i < 10; i++)
	{
		i1[i] = i;
		i2[i] = i;
		i3.push_back(i);
	}

	// idx범위 초과(공간부족)
	// i1[10] = 10;
	// i2[10] = 10;

	// 자동으로 크기확장 후 삽입
	i3.push_back(10);

	// vector의 모든 원소 출력
	for (int i = 0; i < i3.size(); i++)
		cout << i3[i] << " ";
}