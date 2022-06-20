#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void recursion(int n);
void underscore();

int tab = 0;
int main(void)
{
	int n = 0;
	scanf("%d", &n);
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");

	recursion(n);

	return 0;
}

void recursion(int n)
{
	

	underscore();
	printf("\"����Լ��� ������?\"\n");
	if (n == 0) {
		underscore();
		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
		underscore();
		printf("��� �亯�Ͽ���.\n");
		return;
	}
	underscore();
	printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
	underscore();
	printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
	underscore();
	printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
	tab++;
	recursion(n - 1);
	tab--;
	underscore();
	printf("��� �亯�Ͽ���.\n");
	return;
}

void underscore()
{
	for (int i = 0; i < tab; i++) {
		printf("____");
	}
	return;
}