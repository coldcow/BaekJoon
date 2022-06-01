#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long unsigned int input = 0;
	int n = 1;
	scanf("%d", &input);
	if (input == 1)
		printf("%d", input);
	else {
		for (int i = 1; i < input; i++) {
			if (input > n && input <= (n + 6 * i)) {
				printf("%d", i+1);
				break;
			}

			n += 6 * i;
		}
	}

	return 0;
}