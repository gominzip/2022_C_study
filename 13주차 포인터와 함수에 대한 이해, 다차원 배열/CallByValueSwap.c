#include <stdio.h>

void Swap(int n1, int n2)  // �Ű����� n1, n2����
{
	int temp = n1;  // �Ű����� temp ���� �� n1�� ������ �ʱ�ȭ
	n1 = n2;  // n1�� n2�� �� �Ҵ�
	n2 = temp;  // n2�� temp�� ��, �� ���� n1�� �ʱ�ȭ���� �Ҵ�
	printf("n1 n2: %d %d \n", n1, n2);  // n1, n2 ���
}

int main(void)
{
	int num1 = 10;  // int�� ���� ���� �� �ʱ�ȭ
	int num2 = 20;  // int�� ���� ���� �� �ʱ�ȭ
	printf("num1 num2: %d %d \n", num1, num2);  // num1, num2 �� ���

	Swap(num1, num2);  // num1�� num2�� ����� ���� ���� �ٲ�� ���!
	printf("num1 num2: %d %d \n", num1, num2);  // num1, num2 �� ���
	return 0;
}