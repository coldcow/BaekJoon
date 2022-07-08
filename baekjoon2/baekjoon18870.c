#include <stdio.h>
#include <stdlib.h>

int input[1000000] = { 0, };
int count[1000000] = { 0, };

int compare(const void* a, const void* b) {

}

int main(void)
{
	int n = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
		scanf_s("%d", &input[i]);

	qsort(input, n, sizeof(int), compare);

	for (int i = 0; i < n; i++)
		printf("%d ", count[i]);

	return 0;
}