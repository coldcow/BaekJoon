#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0;
	int count = 0;
	int input[100] = { 0 };

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &input[i]);

		for (int j = 2; j <= input[i]; j++) {
			if (input[i] == j)
				count++;
			if (input[i] % j == 0)
				break;
		}
	}

	printf("%d", count);
	return 0;
}