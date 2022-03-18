#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int array[10];
	int sum = 0;
	double avg = 0;

	for (int i = 0; i < 10; i++) {
		array[i] = (rand() % 100) + 1; //°ª ÀúÀå
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}

	for (int i = 0; i < 10; i++) {
		sum += array[i]; //ÇÕ
	}

	avg = (double) sum / 10; //Æò±Õ

	printf("\nÇÕ : %d, Æò±Õ : %1.f", sum, avg);

	return 0;
}