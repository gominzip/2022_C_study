//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//int BiggestNum(int num1, int num2, int num3)  // ū ���� ���ϴ� �Լ� ����
//{
//	if (num1 > num2)  // num1�� num2���� ũ�� �Ʒ� ���� ����
//		return (num1 > num3) ? num1 : num3;  // �� �� ������
//	else  // num2�� num1���� ũ�� �Ʒ� ���� ����
//		return (num2 > num3) ? num2 : num3;  // �� �� ������
//}
//
//int SmallestNum(int num1, int num2, int num3)  // ���� ���� ���ϴ� �Լ� ����
//{
//	if (num1 < num2)  // num1�� num2���� ������ �Ʒ� ���� ����
//		return (num1 < num3) ? num1 : num3;  // �� �� ������
//	else  // num2�� num1���� ������ �Ʒ� ���� ����
//		return (num2 < num3) ? num2 : num3;  // �� �� ������
//}
//
//int main(void)
//{
//	int num1, num2, num3;  // int�� ���� ����
//	printf("�� ���� ���� �Է�: ");
//	scanf("%d %d %d", &num1, &num2, &num3);  // ���� �Է� �� ���� �ʱ�ȭ
//	printf("���� ū ���� %d \n", BiggestNum(num1, num2, num3));  // �Լ��� ȣ��
//	printf("���� ���� ���� %d \n", SmallestNum(num1, num2, num3));  // �Լ��� ȣ��
//	return 0;  // 0 ��ȯ, ���α׷� ����
//}
//
//
