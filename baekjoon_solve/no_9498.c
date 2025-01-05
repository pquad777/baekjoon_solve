#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int score;
	scanf("%d", &score);
	printf("%d\n", score < 80);
	if (score >= 90)
		printf("A");
	else if (80 <= score && score< 90)
		printf("B");
	else if (70 <= score && score< 80)
		printf("C");
	else if (60 <= score && score< 70)
		printf("D");
	else
		printf("F");
	return 0;
}