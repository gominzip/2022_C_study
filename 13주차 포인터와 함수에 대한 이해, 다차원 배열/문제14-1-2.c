//#include <stdio.h>
//
//void Swap3(int* ptr1, int* ptr2, int* ptr3)  // ������ �Ű����� ���� �� ���޹��� ������ �ּҰ� ����
//{
//	int temp = *ptr3;  // �Ű����� temp�� num3�� �� ����
//	*ptr3 = *ptr2;  // num3�� num2�� ����
//	*ptr2 = *ptr1;  // num2�� num1�� ����
//	*ptr1 = temp;  // num1�� temp�� = num3�� ����
//}
//
//int main(void)
//{
//	int num1 = 2;  // int�� ���� ���� �� �ʱ�ȭ
//	int num2 = 3;
//	int num3 = 4;
//	printf("num1: %d  num2: %d  num3: %d \n", num1, num2, num3);  // ���� num1, num2, num3 ���
//	Swap3(&num1, &num2, &num3);  // �Լ�ȣ��, �ּҰ� ����
//	printf("num1: %d  num2: %d  num3: %d \n", num1, num2, num3);  // �ڹٲ� num1, num2, num3 ���
//	return 0;
//}