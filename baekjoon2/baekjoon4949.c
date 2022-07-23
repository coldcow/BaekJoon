#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef char element;

typedef struct {
	element *data;
	int size;
} Stack;

void push(Stack* stack, const char *input) {
	stack->data[stack->size++] = *input;
}

char pop(Stack* stack) {
	return stack->data[--stack->size];
}

int is_empty(Stack *stack) {
	if (stack->size == 0)
		return 1;
	return 0;
}

void check_matching(char input[], int len) {
	Stack stack;

	for (int i = 0; i < len; i++) {
		switch (input[i]) {
		case '(':
			push(&stack, input[i]);
			break;
		case ')':
			if (is_empty(&stack)) {
				printf("NO\n");
				return 0;
			}
			if (pop(&stack) == '(')
				continue;
			printf("NO\n");
			return 0;
		case '[':
			push(&stack, input[i]);
			break;
		case ']':
			if (is_empty(&stack)) {
				printf("NO\n");
				return 0;
			}
			if (pop(&stack) == '[')
				continue;
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
}

int main(void)
{
	char input[500];

	do {
		scanf("%s", &input);

		check_matching(input, strlen(input));

	} while (input[0] != '.');

	return 0;
}