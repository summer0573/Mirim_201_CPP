#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int array[10];
	int sum = 0;
	double avg = 0;
	srand(time(NULL));

	for (int i = 0; i < sizeof(array)/sizeof(int); i++) {
		array[i] = (rand() % 100) + 1; //°ª ÀúÀå
		printf("%d ", array[i]);
		sum += array[i]; //ÇÕ
	}

	avg = (double) sum / 10; //Æò±Õ

	printf("\n");
	printf("ÇÕ : % d\n", sum);
	printf("Æò±Õ : %lf", avg);

	return 0;
}