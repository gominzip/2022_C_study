#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
double CelToFah(double num)  // ȭ�� �µ� ��ȯ �Լ� ����
{
	return 1.8 * num + 32;
}

double FahToCel(double num)  // ���� �µ� ��ȯ �Լ� ����
{
	return (num - 32) / 1.8;
}

int main(void)
{
	int sel;  // �������� ���� int�� ���� ����
	double num;  // double�� ���� ����
	printf("1. ������ ȭ����  2. ȭ���� ������ \n");
	scanf("%d", &sel);  // ��ȯ ���� �Է�
	
	if (sel == 1)  // 1 ���� ��
	{
		printf("���� �Է�: ");
		scanf("%lf", &num);
		printf("ȭ��: %f \n", CelToFah(num));  // CelToFah �Լ� ȣ��, ȭ�� ���
	}
	else if (sel == 2)  // 2 ���� ��
	{
		printf("ȭ�� �Է�: ");
		scanf("%lf", &num);  // num �ʱ�ȭ
		printf("����: %f \n", FahToCel(num));  // FahToCel �Լ� ȣ��, ���� ���
	}
	else  // �� ��
		printf("���� ���� \n");
	
	return 0;  // ���α׷� ����
}