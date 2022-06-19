#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibo(int n);

int main(void)
{
	int input = 0;
	scanf("%d", &input);
	printf("%d", fibo(input));

	return 0;
}

int fibo(int n) {
	if (n <= 0)
		return 0;
	else if (n == 1)
		return 1;
	return fibo(n- 2) + fibo(n - 1);
}