#include <stdio.h>

typedef struct {
	float x;
	float y;
}Point;

void AddValueToPoint(Point* p);

int main(void)
{
	Point point; //stack 할당
	point.x = 5.0f; 
	point.y = 10.0f;
	//call by value라서 값이 안바뀜
	AddValueToPoint(&point); //argument
	printf("%1.f, %1.f\n", point.x, point.y);
	return 0;
}

void AddValueToPoint(Point* p) //parameter
{
	p->x += 10.0f; //. 대신 ->로 표시
	p->y += 15.0f;
}