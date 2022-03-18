#include <stdio.h>


int main(void) {
	int array[10];
	int sum = 0;
	double avg = 0;

	for (int i = 0; i <= 10; i++) {
		array[i] = (rand() % 100 + 1); //값 저장
		sum += array[i]; //합
		printf("%d ", array[i]);
	}
	avg = sum / 10; //배열

	printf("\n합 : %d, 평균 : %1.f", sum, avg);

	return 0;
}