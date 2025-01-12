#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int num;
	int count = 0;
	int arr[43] = { 0 };
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num);
		int fin = num % 42;
		arr[fin] = 1;
	}
	for (int i = 0; i < 42; i++) {
		if (arr[i] != 0) count++;
	}
	
	printf("%d", count);
}