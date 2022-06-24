#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// int* bubble_sort(int size, int arr[]);

int main(void)
{
	int input[105] = { 0, };
	int n = 0, m = 0;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
		scanf("%d", &input[i]);

	// bubble_sort(n, input);

	int max = 0;
	int sum;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				sum = input[i] + input[j] + input[k];
				if ((sum > max) && (sum <= m))
					max = sum;
			}
		}
		
	}


	printf("%d", max);

	return 0;
}

//int *bubble_sort(int size, int arr[])
//{
//	int temp = 0;
//	for (int i = size - 1; i > 0; i--) {
//		for (int j = 0; j < i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	return arr;
//}