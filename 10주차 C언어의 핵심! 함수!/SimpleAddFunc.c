#include <stdio.h>

int Add(int num1, int num2)  // Add�Լ�, ��ȯ�� int, �Ű����� num1, num2����
{
	return num1 + num2;  // ���� ��ȯ
}

int main(void)
{
	int result;  // int�� ���� ����
	result = Add(3, 4);  // result�� �ʱ�ȭ
	printf("�������1: %d \n", result);  // ����� ���
	result = Add(5, 8);  // result�� ���Ҵ�
	printf("�������2: %d \n", result);  // ����� ���
	return 0;  // 0��ȯ, ���α׷� ����
}