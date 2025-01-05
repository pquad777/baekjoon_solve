#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
	
int main(void) {
	int a, b, c;
	scanf("%d %d \n%d", &a, &b, &c);
	if (b + c < 60)
		printf("%d %d", a, b + c);
	else {
		if (a == 23)
			printf("0 %d", b + c - 60);
		else
			printf("%d %d", a + 1, b + c - 60);
	}
	return 0;
}