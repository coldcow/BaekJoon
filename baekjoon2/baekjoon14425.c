#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char *input[10000];
char* set[10000];

int main(void)
{
	int n, m;

	scanf("%d", &n);
	scanf("%d", &m);

	for (int i = 0; i < n; i++) {
		scanf("%s", &input[i]);
	}

	for (int i = n; i < m + n; i++) {
		scanf("%s", &set[i]);
	}

	int count = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (set[i] == input[j]) {
				count++;
				break;
			}
		}
	}

	printf("%d", count);
	return 0;
}