#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double num1, num2 ;  // double�� ���� ����
	printf("�� ���� �Ǽ��� �Է��ϼ���: ");
	scanf("%lf %lf", &num1, &num2);  // �Ǽ� �Է�, double�� ������ �Է� �� ���Ĺ��� %lf ���

	printf("�� ���� ����: %f \n", num1 + num2);  // 11~14�� ��Ģ���� ��� ���, double�� ������ ��� �� ���Ĺ��� %f ���
	printf("�� ���� ����: %f \n", num1 - num2);
	printf("�� ���� ����: %f \n", num1 * num2);
	printf("�� ���� ������: %f \n", num1 / num2);
	return 0;
}