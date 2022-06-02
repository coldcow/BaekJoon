#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input = 0;
	int height = 0, width = 0, n = 0;
	scanf("%d", &input);

	for (int i = 0; i < input; i++) {
		scanf("%d %d %d", &height, &width, &n);

		if (n % height == 0)
			printf("%d%02d\n", height, n / height);
		else 
			printf("%d%02d\n", n % height, n / height + 1);
	}

	return 0;
}