#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int* bubble_sort(int arr[], int n);

int main(void)
{
	int n = 0, input[1000] = { 0, };

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &input[i]);
	}

	bubble_sort(input, n);

	for (int j = 0; j < n; j++)
		printf("%d\n", input[j]);

	return 0;
}

int* bubble_sort(int arr[], int n) {
	int temp;
	for (int i = n-1; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return arr;
}