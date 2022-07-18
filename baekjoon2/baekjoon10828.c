#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 

typedef int element;

typedef struct {
	element data[100001];
	int size;
} Stack;

void push(Stack *stack, int num) {
	stack->data[stack->size++] = num;
}

void pop(Stack* stack) {
	if (stack->size != 0) {
		printf("%d\n", stack->data[--stack->size]);
	}

	else
		printf("%d\n", -1);
}
 
void top(Stack *stack) {
	if (stack->size != 0)
		printf("%d\n", stack->data[stack->size - 1]);

	else
		printf("%d\n", -1);
}

void size(Stack *stack) {
	printf("%d\n", stack->size);
}

void empty(Stack *stack) {

	if (stack->size != 0) {
		printf("0\n");
	}

	else {
		printf("1\n");
	}
}

int main(void) {
	int n;
	char input[10];
	Stack stack;
	stack.size = 0;

	scanf("%d", &n); 

	int number[100]; 

	for (int i = 0; i < n; i++) {
		scanf("%s", &input);
		if (strcmp(input, "push") == 0) {
			int num;
			scanf("%d", &num);
			push(&stack, num);
		}
		else if (strcmp(input, "pop") == 0) {
			pop(&stack);
		}
		else if (strcmp(input, "top") == 0) {
			top(&stack);
		}
		else if (strcmp(input, "size") == 0) {
			size(&stack);
		}
		else if (strcmp(input, "empty") == 0) {
			empty(&stack);
		}
	}
}