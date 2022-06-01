#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input = 0;
	int n = 1;
	scanf("%d", &input);

	for (int i = 1; i <= 10000000; i++) {
		if (input >= n && input < n + i && i % 2 == 1) {
			printf("%d/%d", n + i - input, input - n + 1);
			break;
		}
		
		if (input >= n && input < n + i ){
			printf("%d/%d", input - n + 1, n + i - input);
			break;
		}
		
		n += i;



		// x = a + n(n+1)/2

		// 1 + 2(n-1)
		// 1 2 4 7 11

		// 1 2 4 7 11
		// 3 5 8 12
		// 6 9 13
		// 10 14
		// 15
	}

	return 0;
}