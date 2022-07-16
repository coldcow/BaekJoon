#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 

int number[100001];
int count = 0;
//push X: ���� X�� ���ÿ� �ִ� ����
void push(int num) {
	number[count] = num;
	count++;
}
//pop: ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�. 
void pop() {
	if (count != 0) {
		count--;
		printf("%d\n", number[count]);
		number[count] = 0;
	}
	//���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�
	else
		printf("%d\n", -1);

}
//top: ������ ���� ���� �ִ� ������ ���
void top() {
	if (count != 0)
		printf("%d\n", number[count - 1]);
	//���ÿ� ����ִ� ������ ���� ��쿡�� - 1
	else
		printf("%d\n", -1);
}
//size: ���ÿ� ����ִ� ������ ������ ���
void size() {
	printf("%d\n", count);
}
void empty() {
	//empty: ������ ��������� 1
	if (count != 0) {
		printf("0\n");
	}
	//�ƴϸ� 0�� ���
	else {
		printf("1\n");
	}
}
int main() {
	int n;//ù° �ٿ� �־����� ����� �� N
	char stack[10];//�Է��� ���� �ִ� �迭 ����

	scanf("%d", &n); //����� �� �Է� �ޱ�

	int number[100]; //�Է��� ������ stack �迭 ����

	for (int i = 0; i < n; i++) {
		scanf("%s", &stack);
		if (strcmp(stack, "push") == 0) {
			int num;//���� ���Ŀ� ���ԵǾ� �ִ� ����
			scanf("%d", &num);
			push(num);
		}
		else if (strcmp(stack, "pop") == 0) {
			pop();
		}
		else if (strcmp(stack, "top") == 0) {
			top();
		}
		else if (strcmp(stack, "size") == 0) {
			size();
		}
		else if (strcmp(stack, "empty") == 0) {
			empty();
		}
	}
}