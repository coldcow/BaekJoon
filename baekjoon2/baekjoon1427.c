#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char temp;
	char arr[12];

	scanf("%s", arr);

	for (int i = strlen(arr) - 1; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	printf("%s", arr);

	return 0;
}



