//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//int AbsoCompare(int num1, int num2);  // �Լ��� ����, ������ ū ���� ��ȯ
//int GetAbsoValue(int num);  // �Լ��� ����, ���������� ������ ��ȯ
//
//int main(void)
//{
//	int num1, num2;  // int�� ���� ����
//	printf("�� ���� ���� �Է�: ");
//	scanf("%d %d", &num1, &num2);  // ���� �Է�, ���� �ʱ�ȭ
//	printf("%d�� %d�� ������ ū ����: %d \n",
//		num1, num2, AbsoCompare(num1, num2));  // AbsoCompare �Լ� ȣ��
//	return 0;  // ���α׷� ����
//}
//
//int AbsoCompare(int num1, int num2)  // AbsoCompare �Լ� ����
//{
//	if (GetAbsoValue(num1) > GetAbsoValue(num2))  // GetAbsoValue �Լ� ȣ��, num1�� ������ ũ�ٸ� �Ʒ� ���� ����
//		return num1;  // num1 ��ȯ
//	else  // num2�� ������ ũ�ٸ�
//		return num2;  // num2 ��ȯ
//}
//
//int GetAbsoValue(int num)  // GetAbsoValue �Լ� ����
//{
//	if (num < 0)  // num�� �������
//		return num * (-1);  // num * (-1) ��ȯ
//	else  // num�� ������
//		return num;  // num ��ȯ
//}
