#include <stdio.h>
int NumberCompare(int num1, int num2);  // �Լ��� ����

int main(void)
{
	printf("3�� 4�߿��� ū ���� %d �̴�. \n", NumberCompare(3, 4));  // ���� ��� �Լ��� ȣ��
	printf("7�� 2�߿��� ū ���� %d �̴�. \n", NumberCompare(7, 2));
	return 0;  // 0��ȯ ���α׷� ����
}

int NumberCompare(int num1, int num2)  // �Լ��� ����
{
	if (num1 > num2)  // num1�� num2���� Ŭ �� �Ʒ��� ���� ����
		return num1;  // num1�� ��ȯ
	else  // �� ��
		return num2;  // num2�� ��ȯ
}