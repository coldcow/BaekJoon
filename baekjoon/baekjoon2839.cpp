#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input = 0;
	int arr[1000] = { -1 };
	int count = 0;
	scanf("%d", &input);

	for (int i = 0; i <= input; i++) {
		for (int j = 0; j <= input; j++) {
			if (3 * i + 5 * j == input) {
				arr[count] = i;
				printf("%d\n", arr[count]);
				count++;
			}
		}
	}
	if (arr[0] == -1) {
		printf("-1");
		return 0;
	}
	// 18
	// 3*6
	// 3 + 5*3
	int least = 100;
	for (int k = 0; k < 30; k++) {
		if (arr[k] == -1)
			break;
		if ((arr[k] + ((input - arr[k] * 3) / 5)) < least) {
			least = ((arr[k] + ((input - arr[k] * 3) / 5)) < least);
			printf("least: %d\n", least);
		}
	}
	printf("%d", least);

	return 0;
}