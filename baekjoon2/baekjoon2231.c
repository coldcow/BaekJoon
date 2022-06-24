#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input = 0, sign = 0;
	scanf("%d", &input);

	for (int i = 1; i < input; i++) {
		int temp = i;
		int num = i;

		while (temp > 0) {
			num += temp % 10;
			temp /= 10;
		}

		if (num == input) {
			printf("%d", i);
			input = 0;
			return 0;
		}
	}
	printf("0");

	return 0;
}
