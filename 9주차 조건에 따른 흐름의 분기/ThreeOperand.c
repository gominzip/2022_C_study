#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num, abs;  // int�� ���� ����
	printf("���� �Է�: ");
	scanf("%d", &num);  // ���� �Է�

	abs = num > 0 ? num : num * (-1); // ������ ���̸� num, �����̸� -num ��ȯ
	printf("����: %d \n", abs);  // ��ȯ �� ���
	return 0;
}