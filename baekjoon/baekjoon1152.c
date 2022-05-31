#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) 
{
	int i, len, cnt = 0;
	char arr[1000000];

	scanf("%[^\n]s", arr);
	len = strlen(arr);

	if (len == 1){
		if (arr[0] == ' '){
			printf("0\n");
			return 0;
		}
	}

	for (i = 1; i < len - 1; i++){
		if (arr[i] == ' ')
			cnt++;
	}

	printf("%d\n", cnt + 1);
	return 0;
}