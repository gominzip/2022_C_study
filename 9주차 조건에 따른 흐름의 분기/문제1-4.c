#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num1, num2, result;  // int�� ���� ����
	printf("�� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);  // ���� �Է�

	result = (num1 < num2) ? (num2 - num1) : (num1 - num2);  // �� �� ������ ���
	printf("%d \n", result);  // ����� ���
	
	return 0;
}