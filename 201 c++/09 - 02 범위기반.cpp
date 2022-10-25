#include <iostream>
#include <string>

using namespace std;

enum Food {
	KOREAN,
	JAPANESE,
	CHINESE,
	COUNT
};

void main(void)
{
	int arr[4] = { 10, 20, 30, 40 };
	for (int x : arr) {
		cout << x << " ";
	}
}