#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void hanoi(int n, int from, int to, int temp)
{
	if (n == 1)
	{
		printf("%d %d\n", from, to);
		return;
	}
	hanoi(n - 1, from, temp, to);
	printf("%d %d\n", from, to);
	hanoi(n - 1, temp, to, from);
}

int main()
{
	int N;
	scanf("%d", &N);

	int cnt = pow(2, N) - 1;
	printf("%d\n", cnt);
	hanoi(N, 1, 3, 2);

	return 0;
}