#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input = 0;
	int count = 1;
	int i = 2;

	scanf("%d", &input);

	// count = input;
	while (i <= input / 2) {
		if ((input / count == 1) && (input % count == 0))
			// 72 / 72
			break;

		if (input % i == 0 && input % count == 0) {
			count *= i;
			printf("%d\n", i);
			continue;
		}

		i++;
	}


	return 0;
}