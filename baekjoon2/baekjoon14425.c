#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, m;
	char* input[10000];
	char* set[10000];

	scanf("%d", &n);
	scanf("%d", &m);

	for (int i = 0; i < n; i++) {
		scanf("%s", &input[i]);
		printf("%s", input[i]);
	}

	for (int i = 0; i < m; i++) {
		scanf("%s", &set[i]);
	}
	printf("%s\n", *input[0]);
	/*for (int i = 0; i < n; i++)
		printf("%s\n", input[i]);
	for (int i = 0; i < m; i++)
		printf("%s\n", set[i]);*/

	int count = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (input[j] == set[i]) {
				count++;
				break;
			}
		}
	}


	printf("%d", count);
	return 0;
}