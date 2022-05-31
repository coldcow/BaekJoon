#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int count = 0;

	char input[105];
	for (int i = 0; i < n; i++) {
		int alphabet[26] = { 0 };
		scanf("%s", input);
		for (int j = 0; j < strlen(input); j++) {
			if (alphabet[input[j] - 'a'] == 1 && input[j - 1] != input[j]) {
				count--;
				break;
			}
			alphabet[input[j] - 'a'] = 1;
		}
		count++;
	}
	printf("%d", count);

	return 0;
}