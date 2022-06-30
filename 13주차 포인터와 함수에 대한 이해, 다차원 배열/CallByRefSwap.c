#include <stdio.h>

void Swap(int * ptr1, int * ptr2)  // ������ �Ű����� ptr1, ptr2���� �� num1�� num2�� �ּҰ� ����
{
	int temp = *ptr1;  // �Ű����� temp ���� �� *ptr1�� ������ �ʱ�ȭ
	*ptr1 = *ptr2;  // *ptr1�� *ptr2�� �� �Ҵ�
	*ptr2 = temp;  // *ptr2�� temp�� ��, �� ���� *ptr1�� �ʱ�ȭ���� �Ҵ�
}

int main(void)
{
	int num1 = 10;  // int�� ���� ���� �� �ʱ�ȭ
	int num2 = 20;  // int�� ���� ���� �� �ʱ�ȭ
	printf("num1 num2: %d %d \n", num1, num2);  // num1, num2 �� ���

	Swap(&num1, &num2);  // �Լ�ȣ��, �ּ� ������ ��������
	printf("num1 num2: %d %d \n", num1, num2);  // num1, num2 �� ���
	return 0;
}