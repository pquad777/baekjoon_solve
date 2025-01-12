#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	int num;
	char arr[101];
	int len;
	int total = 0;
	scanf("%d", &num);
	scanf("%s", arr);
	len = strlen(arr);
	for (int i = 0; i < len; i++) {
		total += arr[i] - '0';
	}
	printf("%d", total);
}
