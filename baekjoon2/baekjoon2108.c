#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int input[500000] = { 0, };
void quick_sort(int arr, int n, int L, int R);

int main(void)
{
	int n = 0;
	float sum = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &input[i]);
		sum += input[i];
	}
	quick_sort(input, n, input[0], input[n - 1]);
	printf("%0.f\n", round(sum / n));
	printf("%d\n", input[n / 2 + 1]);

	printf("%d\n", input[n - 1] - input[0]);


	return 0;
}

void quick_sort(int arr[], int n, int L, int R) {
	int left = L;
	int right = R;
	int temp;
	int pivot = arr[(L + R) / 2];

	do {
		while (arr[left] < pivot)
			left++;
		while (arr[right] > pivot)
			right++;
		if (left <= right) {
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			left++;
			right--;
		}
	} while (left <= right);

	if (L < right)
		quick_sort(arr, n, L, right);
	if (R > left)
		quick_sort(arr, n, left, R);
}