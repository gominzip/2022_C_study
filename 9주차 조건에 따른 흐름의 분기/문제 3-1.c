#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n;  // int�� ���� ����
	printf("0�̻��� ���� �Է�: ");
	scanf("%d", &n);  // ���� �Է�

	switch (n / 10)  // ���� n/10�� ���� ����
	{
	case 0:  // ���� 0
		printf("0 �̻� 10�̸� \n");
		break;  // ���ǹ� Ż��
	case 1: // ���� 1
		printf("10 �̻� 20�̸� \n");
		break;  // ���ǹ� Ż��
	case 2:  // ���� 2
		printf("20 �̻� 30�̸� \n");
		break;  // ���ǹ� Ż��
	default:  // �� ��
		printf("30 �̻� \n");
		break;  // ���ǹ� Ż��
	}
	return 0;
}