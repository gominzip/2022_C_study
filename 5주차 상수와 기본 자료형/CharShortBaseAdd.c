#include <stdio.h>

int main(void)
{
	char num1 = 1, num2 = 2, result1 = 0;  // char�ڷ������� ���� ���� �� �ʱ�ȭ
	short num3 = 300, num4 = 400, result2 = 0;  // short�ڷ������� ���� ���� �� �ʱ�ȭ

	printf("size of num1 & num2: %d, %d \n", sizeof(num1), sizeof(num2));  // 8~9�� sizeof�����ڷ� ���� ũ�� Ȯ��
	printf("size of num3 & num4: %d, %d \n", sizeof(num3), sizeof(num4));

	printf("size of char add: %d \n", sizeof(num1 + num2));  // num1�� num2�� ���� ���� sizeof ����, ��ȯ���� printf �Լ��� ȣ��
	printf("size of short add: %d \n", sizeof(num3 + num4));  // num3�� num4�� ���� ���� sizeof ����, ��ȯ���� printf �Լ��� ȣ��

	result1 = num1 + num2;  // 14~15�� �� ������ ���� result�� ����
	result2 = num3 + num4;
	printf("size of result1 & result2: %d, %d \n", sizeof(result1), sizeof(result2));  // result1, 2 ���
	return 0;
}