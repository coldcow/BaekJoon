#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int day = 0, night = 0, height = 0;
	scanf("%d %d %d", &day, &night, &height);

	if ((height - night) % (day - night) == 0)
		printf("%d", (height - night) / (day - night));
	else
		printf("%d", (height - night) / (day - night) + 1);

	return 0;
}