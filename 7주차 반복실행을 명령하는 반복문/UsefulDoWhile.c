#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int total = 0, num = 0;  // ���� ���� �� �ʱ�ȭ

	do  //do while�� ����
	{
		printf("���� �Է�(0 to quit): ");
		scanf("%d", &num);  // ���� �Է�
		total += num;  // ���� ����
	} while (num != 0);  // 0�̸� ����
	printf("�հ�: %d \n", total);  // �հ� ���
	return 0;
}