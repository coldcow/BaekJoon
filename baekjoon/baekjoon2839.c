#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input, cnt = 0;
	scanf("%d", &input);

	while (true) {
		if (input % 5 == 0) {
			cnt += input / 5;
			break;
		}

		input -= 3;
		cnt++;
		if (input <= 0) break;
	}

	if (input < 0) printf("-1\n");
	else printf("%d\n", cnt);

	return 0;
}