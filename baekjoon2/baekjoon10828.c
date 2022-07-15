#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 10000

typedef struct {
	int data[MAX_SIZE];
	int top;
	int size;
} Stack;

void push(Stack* stack, int num) {
	stack->data[stack->top++] = num;
	stack->size++;
}

int pop(Stack* stack) {
	if (empty(stack)) {
		return -1;
	}
	stack->size--;
	return stack->data[stack->top--];
}

void size(Stack* stack) {
	printf("%d\n", stack->size);
}

int empty(Stack* stack) {
	if (stack->size == 0)
		return 1;
	return 0;
}

void top(Stack* stack) {
	if (empty(stack)) {
		printf("-1\n");
		return;
	}
	printf("%d\n", stack->data[stack->top]);
}

int main(void)
{
	int n, num = 0;
	char instruction;
	Stack stack;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", &instruction);

		if (instruction == 'top') {
			top(&stack);
		}

		else if (instruction == 'size') {
			size(&stack);
		}

		else if (instruction == 'pop') {
			printf("%d\n", pop(&stack));
		}

		else if (instruction == "empty") {
			printf("%d\n", empty(&stack));
		}

		if (instruction == "push") {
			scanf("%d", &num);
			push(&stack, num);
		}
	}

	printf("%d", num);

	return 0;
}

