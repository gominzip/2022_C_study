#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double rad;  // double������ ���� ����
	double area;  // double������ ���� ����
	printf("���� ������ �Է�: ");
	scanf("%lf", &rad);  // ���� ������ �Է�, double�� �����͸� �Է� ���� �� ���Ĺ��� %lf ���

	area = rad * rad * 3.1415;  // ���� ���� ���, ���� area �ʱ�ȭ
	printf("���� ����: %f \n", area);  // double�� ������ ��� �� ���Ĺ��� %f ���
	return 0;
}