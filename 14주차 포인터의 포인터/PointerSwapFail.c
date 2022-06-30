#include <stdio.h>

void SwapIntPtr(int* p1, int* p2)  // ������ �Ű����� ����, p1=ptr, p2=ptr2�� ����
{
	int* temp = p1;  // p1�� p2�� ����� �ּҰ� ���� ����
	p1 = p2;  
	p2 = temp;
}

int main(void)
{
	int num1 = 10, num2 = 20;  // int�� ���� ���� �� �ʱ�ȭ
	int* ptr1, *ptr2;  // int�� ������ ���� ����
	ptr1 = &num1, ptr2 = &num2;  // ������ ������ ���� �ּ� �� ����
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);  // num1, num2 ���

	SwapIntPtr(ptr1, ptr2);  // �Լ� ȣ��, ������ ���ڷ� ����
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);  // num1, num2 ��� > but ��ȭ X
	return 0;
}