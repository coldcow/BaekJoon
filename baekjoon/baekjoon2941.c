#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[105];
	int count = 0;
	scanf("%s", input);
	for (int i = 0; i < strlen(input); i++) {
		if (input[i] == 'c') {
			if (input[i + 1] == '-' || input[i+1] == '=') {
				i++;
				count++;
				continue;
			}
		}

		else if (input[i] == 'd') {
			if (input[i + 1] == 'z' && input[i+2] == '=') {
				i += 2;
				count++;
				continue;
			}
			if (input[i+1] == '-' ){
				i++;
				count++;
				continue;
			}
		}

		else if (input[i] == 'l') {
			if (input[i + 1] == 'j') {
				i++;
				count++;
				continue;
			}
		}

		else if (input[i] == 'n') {
			if (input[i + 1] == 'j') {
				i++;
				count++;
				continue;
			}
		}

		else if (input[i] == 's') {
			if (input[i+1] == '=') {
				i++;
				count++;
				continue;
			}
		}

		if (input[i] == 'z') {
			if (input[i + 1] == '=') {
				i++;
				count++;
				continue;
			}
		}

		count++;
	}

	printf("%d", count);
	return 0;
}