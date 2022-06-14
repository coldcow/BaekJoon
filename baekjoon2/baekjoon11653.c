#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input = 0;

	scanf("%d", &input);

	for (int i = 2; i <= input; i++) {
		while (input % i == 0) {
			printf("%d\n", i);
			input /= i;
		}
	}

	return 0;
}