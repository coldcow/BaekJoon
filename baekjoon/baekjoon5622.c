#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[16];
	int total_time = 0;
	scanf("%s", input);
	int len = strlen(input);

	for (int i = 0; i < len; i++) {
		if ((input[i] - 'A') >= 0 && (input[i] - 'A') < 3)
			total_time += 3;
		if ((input[i] - 'A') >= 3 && (input[i] - 'A') < 6)
			total_time += 4;
		if ((input[i] - 'A') >= 6 && (input[i] - 'A') < 9)
			total_time += 5;
		if ((input[i] - 'A') >= 9 && (input[i] - 'A') < 12)
			total_time += 6;
		if ((input[i] - 'A') >= 12 && (input[i] - 'A') < 15)
			total_time += 7;
		if ((input[i] - 'A') >= 15 && (input[i] - 'A') < 19)
			total_time += 8;
		if ((input[i] - 'A') >= 19 && (input[i] - 'A') < 22)
			total_time += 9;
		if ((input[i] - 'A') >= 22 && (input[i] - 'A') < 26)
			total_time += 10;
	}
	printf("%d", total_time);
	return 0;
}