#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char input1[30];
	char input2[30];
	int num1 = 0, num2 = 0;
	scanf("%s", input1);
	scanf("%s", input2);

	num1 = (input1[0] - '0') + (input1[1] - '0') * 10 + (input1[2] - '0') * 100;
	num2 = (input2[0] - '0') + (input2[1] - '0') * 10 + (input2[2] - '0') * 100;

	printf("%d", num1 > num2? num1 : num2);
	
	return 0;
}
