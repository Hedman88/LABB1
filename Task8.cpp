
#include <stdio.h>
#include <iostream>
#include "Task8.h"

using namespace std;
/*
void halfPyramidNumbers();
void halfPyramidLetters();

int main() {

	halfPyramidNumbers();
	halfPyramidLetters();

	system("pause");
	return 0;
}

*/
void halfPyramidNumbers()
{
	int n;
	printf("Give me a number.\n");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int k = 1; k <= i; k++) {
			printf(" %d", k);
		}
		printf("\n");
	}
}

void halfPyramidLetters() {
	char n;
	int k = 65;
	printf("Give me a capital letter.\n");
	scanf_s(" %c", &n);
	for (int i = 0; i <= n-65; i++) {
		for (int k = 0; k < i+1; k++) {
			printf(" %c", i+65);
		}
		printf("\n");
		//printf("%d \n", i+1);
	}
}