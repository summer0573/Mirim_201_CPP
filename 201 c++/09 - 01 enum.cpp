#include <iostream>
#include <string>

using namespace std;

/*
enum Food {
	KOREAN,
	JAPANESE,
	CHINESE,
	COUNT
};

void main(void)
{
	string food_spot[Food::COUNT];
	food_spot[Food::KOREAN] = "삼백집";
	food_spot[Food::JAPANESE] = "야키토리 묵";
	food_spot[Food::CHINESE] = "태화장";

	cout << "맛집리스트" << endl;
	int menu = 1;
	switch (menu)
	{
	case Food::KOREAN:
		cout << "한식 : ";
		break;
	case Food::JAPANESE:
		cout << "일식 : ";
		break;
	case Food::CHINESE:
		cout << "중식 : ";
		break;
	}
	cout << food_spot[menu];
}*/

enum House {
	BED,
	TABLE,
	CHAIR,
	APARTMENT
};

void main(void)
{
	string myHome[House::APARTMENT];
	myHome[House::BED] = "에이스 침대";
	myHome[House::TABLE] = "장인가구";
	myHome[House::CHAIR] = "이케아";

	cout << "가구 판매점" << endl;
	int furniture = 1;
	switch (furniture)
	{
	case House::BED:
		cout << "침대 : ";
		break;
	case House::TABLE:
		cout << "테이블 : ";
		break;
	case House::CHAIR:
		cout << "의자 : ";
		break;
	}
	cout << myHome[furniture];

}

/*
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

*/