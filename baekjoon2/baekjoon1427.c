#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void insert(int arr[], int len, int num);

int main(void)
{
	char input;
	int arr[12] = { 0, };

	scanf("%s", &input);
	int len = 12;
	int int_input = (int)input;

	for (int i = 0; i < len; i++) {
		insert(arr, len, int_input % 10);
		int_input /= 10;
	}

	for (int i = 0; i < len; i++)
		printf("%c", (char)arr[i]);


	return 0;
}

// num = 5
// i = 2
// 55 33 3

void insert(int arr[], int len, int num) {
	for (int i = 0; i < len; i++) {
		if (num >= arr[i]) {
			for (int j = len - 1; j > i; j--) {
				arr[j] = arr[j - 1];
			}
			arr[i] = num;
		}

		else {
			arr[i + 1] = arr[i];
			arr[i] = num;
		}
	}
}
