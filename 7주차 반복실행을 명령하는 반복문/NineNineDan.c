#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int dan = 0, num = 1;  // int�� ���� ���� �� �ʱ�ȭ
	printf("�� ��? ");
	scanf("%d", &dan);  // dan �ʱ�ȭ�� �Է�

	while (num < 10)  // 10ȸ �ݺ�
	{
		printf("%d x %d = %d \n", dan, num, dan * num);  // ������ ���
		num++;  // num=num+1
	}  // 10ȸ �ݺ� �� ����
	return 0;
}