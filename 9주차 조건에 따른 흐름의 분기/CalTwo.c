//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main(void)
//{
//	int opt;  // int�� ���� ����
//	double num1, num2;  // double�� ���� ����
//	double result;  // double�� ���� ����
//
//	printf("1.���� 2.���� 3.���� 4.������ \n");
//	printf("����? ");
//	scanf("%d", &opt);  // ������ ��ȣ �Է�
//	printf("�� ���� �Ǽ� �Է�: ");
//	scanf("%lf %lf", &num1, &num2);  // �Ǽ� �Է�
//
//	if (opt == 1)  // 1�� �Է� �� ����
//		result = num1 + num2;
//	else if (opt == 2)  // 2�� �Է� �� ����
//		result = num1 - num2;
//	else if (opt == 3)  // 3�� �Է� �� ����
//		result = num1 * num2;
//	else  // �� ���� ��� ������
//		result = num1 / num2;
//
//	printf("���: %f \n", result);  // ��� ���
//	return 0;
//}