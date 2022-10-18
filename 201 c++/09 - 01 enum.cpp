#include <iostream>
#include <string>

using namespace std;

void main(void)
{
	string food_spot[3];
	food_spot[0] = "삼백집";
	food_spot[1] = "야키토리 묵";
	food_spot[2] = "태화장";
	
	cout << "맛집리스트" << endl;
	int menu = 1;
	switch(menu)
	{
	case 0:
		cout << "한식 : ";
			break;
	case 1:
		cout << "일식 : ";
		break;
	case 2:
		cout << "중식 : ";
		break;
	}
	cout << food_spot[menu];
}