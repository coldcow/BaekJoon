#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n) {
	if (n > 1)
		return n * factorial(n - 1);
	else return 1;
}

int main(void)
{
	int input = 0;
	scanf("%d", &input);
	printf("%d", factorial(input));

	return 0;
}
