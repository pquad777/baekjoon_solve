	#define _CRT_SECURE_NO_WARNINGS
	#include<stdio.h>

	int main(){
		int n;
		int max = 0;
		int arr[1001];
		double total = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
			if (max < arr[i]) max = arr[i];
		}
		for (int j = 0; j < n; j++) {
			total += (double)arr[j] / max * 100;
		}
	
		printf("%g", (double)total / n);
	}