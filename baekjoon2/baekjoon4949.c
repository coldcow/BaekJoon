#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SIZE 105

typedef struct
{
	char stack[SIZE];
	int n;
}StackType;

void init_stack(StackType* s)
{
	s->n = -1;
}

int is_full(StackType* s)
{
	return s->n == SIZE - 1;
}

int is_empty(StackType* s)
{
	return s->n == -1;
}

void push(StackType* s, char e)
{
	if (is_full(s))
		return;

	s->stack[++s->n] = e;
}

char pop(StackType* s)
{
	if (is_empty(s))
		return '!';

	char tmp = s->stack[s->n--];
	return tmp;
}

int main()
{
	StackType s;
	init_stack(&s);

	int i, chk = 1;
	char text[SIZE], e;

	while (1)
	{
		fgets(text, SIZE, stdin);

		if (strcmp(text, ".\n") == 0)
			break;

		for (i = 0; i < strlen(text); i++)
		{
			if (text[i] == '(' || text[i] == '[')
				push(&s, text[i]);
			else if (text[i] == ')')
			{
				e = pop(&s);
				if (e != '(')
				{
					chk = 0;
					break;
				}
			}
			else if (text[i] == ']')
			{
				e = pop(&s);
				if (e != '[')
				{
					chk = 0;
					break;
				}
			}
		}
		if (!is_empty(&s))
			chk = 0;

		if (chk == 0)
			printf("no\n");
		else
			printf("yes\n");

		s.n = -1;
		chk = 1;
	}

	return 0;
}