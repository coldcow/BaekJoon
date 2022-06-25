#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input = 0;
	int x[200] = { 0, };
	int y[200] = { 0, };
	int rank[200] = { 0, };

	scanf("%d", &input);

	int count = 1;
	for (int i = 0; i < input; i++) {
		scanf("%d %d", &x[i], &y[i]);

		for (int j = 0; j < input; j++) {
			if (i == j)
				continue;
			if ((x[i] > x[j] && y[i] < y[j]) || (x[i] < x[j] && y[i] > y[j])) {
				rank[i] = count;
				rank[j] = count;
				continue;
			}
		}
	}


	return 0;
}