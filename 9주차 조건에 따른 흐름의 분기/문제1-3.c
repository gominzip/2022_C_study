#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int kor, eng, math;  // int�� ���� ����
	double avr;  // double�� ���� ����
	printf("����, ����, ���� ���� �Է�: ");
	scanf("%d %d %d", &kor, &eng, &math);  // ���� �Է�
	avr = (kor + eng + math) / 3.0;  // ��� ���
	printf("��� : %f \n", avr);  // ����� ���

	if (avr >= 90.0)  // ��� 90�� �̻��� ��
		printf("A \n");
	else if (avr >= 80.0)  // ��� 80�� �̻��� ��
		printf("B \n");
	else if (avr >= 70.0)  // ��� 70�� �̻��� ��
		printf("C \n");
	else if (avr >= 60.0)  // ��� 50�� �̻��� ��
		printf("D \n");
	else  // �� ���� ���
		printf("F \n");

	return 0;
}