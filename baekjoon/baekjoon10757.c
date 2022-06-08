#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	unsigned long int a = 0, b = 0;
	scanf("%lu %lu", &a, &b);
	printf("%lu", a + b);

	return;
}