#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int total = 1;  // ���� ���̹Ƿ� 1�� ���� �ʱ�ȭ
	int n;  // ���� ���� �� �ʱ�ȭ

	printf("n �Է�: ");
	scanf("%d", &n);  // ���� �Է�

	for (int i = 1; i <= n; i++)  // i ���� �� ���� ���̹Ƿ� 1�� �ʱ�ȭ, n���� �ݺ�, 1�� ����
		total *= i;  //  total = total*i

	printf("%d! = %d \n", n, total);  // ��� ���
	return 0;
}