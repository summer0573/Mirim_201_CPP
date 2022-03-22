#include <stdio.h>

int main(void)
{
	int a, b, c = 0;
	a = ++c;	//C가 1 증가하고 나서 a에 대입. c:1, a:1
	b = c++;	//b에 대입하고, c가 1증가 b:1, c:2
	printf("%d %d %d \n", a, b, ++c);	//
}