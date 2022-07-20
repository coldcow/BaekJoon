#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char element;

typedef struct {
	element data[51];
	int size;
} Stack;

void push(Stack* stack, char input) {
	stack->data[stack->size++] = input;
}

char pop(Stack* stack) {
	return stack->data[--stack->size];
}

int main(void)
{
	Stack stack;
	stack.size = 0;
	int n;
	char input;
	char input_arr[51];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", &input);

		/*if (strlen(&input) % 2 == 1) {
			printf("NO\n");
			continue;
		}*/

		strcpy(input_arr, &input);
		// (( -> push
		// () -> pop
		// ) -> push x
		// ( -> push
		 
		for (int j = 0; j < strlen(&input); j++) {
			if (stack.data[stack.size - 1] == '(' && input_arr[j] == ')') {
				pop(&stack);
				continue;
			}

			push(&stack, input_arr[j]);
		}
		if (stack.size != 0) {
			printf("NO\n");
			stack.size = 0;
			continue;
		}
		
		printf("YES\n");
		input = NULL;
	}

	free(&stack);
	return 0;
}