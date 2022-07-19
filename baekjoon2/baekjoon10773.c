#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef int element;

typedef struct {
	element data[100001];
	int size;
} Stack;

void push(Stack* stack, int num) {
	if (stack->size == 0) {
		stack->data[stack->size++] = num;
		return;
	}
	stack->data[stack->size++] = num;
	
}

int pop(Stack* stack) {
	return stack->data[stack->size-- - 1];
}

int main(void)
{
	int n = 0;
	int input, sum = 0;
	Stack stack;
	stack.size = 0;
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &input);
		if (input == 0)
			pop(&stack);
		else {
			push(&stack, input);
		}
	}

	while (stack.size != 0) {
		sum += pop(&stack);
	}

	printf("%d", sum);

	return 0;
}