//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 10, num2 = 20;  // int�� ���� ���� �� �ʱ�ȭ
//	int* ptr1 = &num1;  // int�� ������ ���� ���� �� num1 �ּ� �� ����
//	int* ptr2 = &num2;  // int�� ������ ���� ���� �� num2 �ּ� �� ����
//
//	(*ptr1) += 10;  // num1+=10�� ����
//	(*ptr2) -= 10;  // num2-=10�� ����
//
//	ptr1 = &num2;  // ����� num2�� ����
//	ptr2 = &num1;  // ����� num1���� ����
//
//	printf("ptr1: %d \n", *ptr1);  // prt1�� ����Ű�� ���� �� ���
//	printf("ptr2: %d \n", *ptr2);  // prt2�� ����Ű�� ���� �� ���
//
//	return 0;
//}