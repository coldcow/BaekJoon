#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input[3], largest = 0;

	scanf("%d %d %d", &input[0], &input[1], &input[2]);

	for (int i = 0; i < 3; i++) {
		if (largest < input[i])
			largest = input[i];
	}

	if ((input[0] == input[1]) && (input[0] == input[2]) && (input[1] == input[2]))
		printf("%d", 10000 + input[0] * 1000);
	else if ((input[0] == input[1]) && (input[0] != input[2]) && (input[2] != input[1]))
		printf("%d", 1000 + input[0] * 100);
	else if ((input[0] != input[1]) && (input[0] == input[2]) && (input[2] != input[1]))
		printf("%d", 1000 + input[0] * 100);
	else if ((input[0] != input[1]) && (input[0] != input[2]) && (input[2] == input[1]))
		printf("%d", 1000 + input[1] * 100);
	else if ((input[0] != input[1]) && (input[0] != input[2]) && (input[2] != input[1]))
		printf("%d", largest * 100);
		


	return 0;
}