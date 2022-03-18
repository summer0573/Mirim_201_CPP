#include <stdio.h>

int main(void) {
	int num1 = 10, num2 = 20, num3 = 30;
	
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3; 

	//ptr3가 num2를 가르킴(&num3 -> &num2)
	ptr3 = ptr2; //num2
	//ptr2가 num1를 가르킴(&num2 -> &num1)
	ptr2 = ptr1; //num1
	//ptr1가 num1 가르킴(가르키는 대상 변동 없음)
	ptr1 = ptr2; //num1

	printf("%d %d %d", *ptr1, *ptr2, *ptr3);

	return 0;
}