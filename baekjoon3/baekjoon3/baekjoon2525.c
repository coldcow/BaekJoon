#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int hour, min;
	int plus;
	scanf("%d %d", &hour, &min);
	scanf("%d", &plus);

	if (hour + plus / 60 + (min + plus % 60) / 60 >= 24)
		printf("%d %d", hour + plus / 60 + (min + plus % 60) / 60 - 24, (min + plus % 60) % 60);
	else
		printf("%d %d", hour + plus / 60 + (min + plus % 60) / 60 , (min + plus % 60) % 60);
	
	return 0;
}