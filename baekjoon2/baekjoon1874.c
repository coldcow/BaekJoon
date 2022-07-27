#include <stdio.h>
#include <string.h>

typedef int element;

typedef struct {
	int* data;
	int size;
} Stack;

void init_stack(Stack* stack) {
	stack->size = 0;
}

int main(void)
{
	int n;
	int num = 1;
	Stack stack;
	init_stack(&stack);

	scanf("%d", &n);

	int *arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		
		while (stack.data[stack.size - 1] != arr[i]) {
			if (stack.data[stack.size - 1] > arr[i])
				push(&stack, num++);
			else 
				pop(&stack);
		}

	}

	



	return 0;
}