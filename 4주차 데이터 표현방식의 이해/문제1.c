#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num;
	int result;
	printf("��ȣ�� �ٲٰ� ���� ���� �Է� : ");
	scanf("%d", &num);  // ���� �Է�

	result = ~num;  // 1�� ������ ����
	result += 1;  // 1�� ����

	printf("%d \n", result);
	return 0;
}