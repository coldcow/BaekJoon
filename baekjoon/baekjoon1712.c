#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int fixed_expense = 0;
	int variable_expense = 0;
	int revenue = 0;

	scanf("%d %d %d", &fixed_expense, &variable_expense, &revenue);

	if (variable_expense >= revenue) {
		printf("-1");
		return 0;
	}

	printf("%d", fixed_expense / (revenue - variable_expense) + 1);

	return 0;
}