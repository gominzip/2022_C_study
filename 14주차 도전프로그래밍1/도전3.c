#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void GCD(int n1, int n2)
{
	int i, GCD;  // int�� ���� ����
	for (i = 1; i < n1 + 1; i++)  // 1���� n2���� �ִ����� ã��
	{
		if ((n1 % i == 0) && (n2 % i == 0))  // �� ���� ���� �������� ��� 0�̸� �Ʒ� ���� ����
			GCD = i;  // �ִ��������� i ����
	}

	printf("�� ���� �ִ�����: %d \n", GCD);  // ���� �ִ����� ���
}

int main(void)
{
	int n1, n2;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &n1, &n2);  // �� ���� �Է�
	
	if (n1 < n2)  // n1�� ������
		GCD(n1, n2);  // n1�� ù ��° ���ڷ�
	else  // �� �ܴ�
		GCD(n2, n1);  // n2�� ù ��° ���ڷ�

	return 0;
}