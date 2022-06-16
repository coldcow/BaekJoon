#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input, count = 0;
	int i, j, arr[250000] = { 0, };

	arr[0] = 1, arr[1] = 1;
	for (j = 2; j < 250000 / j; j++)
	{
		if (arr[j] == 1) continue;
		for (i = j * j; i < 250000; i += j)
			if (i % j == 0) arr[i] = 1;
	}
	scanf("%d", &input);

	while (input != 0)
	{
		count = 0;
		for (i = input + 1; i <= input * 2; i++)
			if (arr[i] == 0)
				count++;
		printf("%d\n", count);
		scanf("%d", &input);
	}
	return 0;
}
