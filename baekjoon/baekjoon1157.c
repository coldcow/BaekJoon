#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int alpha_count[26] = { 0 };

	char input[10000];
	scanf("%s", input);

	for (int j = 0; j < 100; j++) {
		if (input[j] == NULL )
			break;

		if (input[j] >= 'A' && input[j] <= 'Z')
			alpha_count[input[j] - 'A'] += 1;
		else if (input[j] >= 'a' && input[j] <= 'z')
			alpha_count[input[j] - 'a'] += 1;
	}
	
	int count_sign = 0;
	int most_frequent = 0;
	int frequent_char;


	for (int k = 0; k < 26; k++) {
		if (alpha_count[k] > most_frequent) {
			most_frequent = alpha_count[k];
			frequent_char = k;
		}
	}
	
	for (int i = 0; i < 26; i++) {
		if (i == frequent_char)
			continue;
		if (most_frequent == alpha_count[i])
			count_sign = 1;
	}

	if (count_sign == 1)
		printf("?");
	else
		printf("%c", frequent_char + 'A');

	return 0;
}