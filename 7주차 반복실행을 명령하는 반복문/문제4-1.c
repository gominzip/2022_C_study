#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, b;  // �Է¹��� �� ���� ����
	int total = 0;  // �հ� ���� ���� �� �ʱ�ȭ

	printf("�� ���� ������ �Է�(���� ������ �ۼ�) :");
	scanf("%d %d", &a, &b);  // ���� �Է�

	for (; a <= b; a++)  // a=b���� �ݺ�, a�� 1�� ����
		total += a;  // total = total+a

	printf("�հ�: % d \n", total);  // �հ� ���
	return 0;
}