#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int* bubble_sort(int size, int arr[]);

int main(void)
{
	int input[105] = { 0, };
	int n = 0, m = 0;

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d", &input[i]);

	bubble_sort(n, input);

	int near = 999999;
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				printf("%d %d %d\n", i, j, k);
				if (m < (input[i] + input[j] + input[k]))
					continue;
				if ((m - (input[i] + input[j] + input[k])) < near)
					near = input[i] + input[j] + input[k];

			}
		}
		
	}


	printf("%d", near);

	return 0;
}

int *bubble_sort(int size, int arr[])
{
	int temp = 0;
	for (int i = size - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return arr;
}