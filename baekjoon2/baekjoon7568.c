#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input = 0;
	int x[200] = { 0, };
	int y[200] = { 0, };
	int rank[200] = { 0, };

	scanf("%d", &input);

	for (int i = 0; i < input; i++) 
		scanf("%d %d", &x[i], &y[i]);

	for (int j = 0; j < input; j++) {
		int count = 1;
		for (int k = 0; k < input; k++) {
			if (x[j] < x[k] && y[j] < y[k])
				count++;
		}
		printf("%d", count + 1);
	}
	

	return 0;
}