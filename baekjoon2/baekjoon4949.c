#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef char element;

typedef struct {
	element data[101];
	int size;
} Stack;

void push(Stack* stack, const char *input) {
	stack->data[stack->size++] = input;
}

char pop(Stack* stack) {
	return stack->data[--stack->size];
}

int main(void)
{
	Stack stack;
	char *input[100];

	do {
		scanf("%s", input);

		for (int i = 0; i < strlen(input); i++) {
			switch ((char)*input[i]) {
			case ')':
				if (stack.data[i - 1] == '(')
					pop(&stack);
				break;
			case ']':
				if (stack.data[i - 1] == '[')
					pop(&stack);
				break;
			}

			push(&stack, input[i]);
		}

		if (stack.size == 0)
			printf("yes\n");
		else
			printf("no\n");

	} while (input[0] != '.');

	return 0;
}