#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int h, m, s;  // ��, ��,�� int�� ���� ����
	printf("��(second) �Է�: ");
	scanf("%d", &s);  // ���� s�� ���� �Է�
	h = s / 3600;  // �� ���
	m = (s % 3600) / 60;  // �� ���
	s = (s % 3600) % 60; // �� ���
	printf("[h: %d, m: %d, s: %d] \n", h, m, s);  // ��, ��, �� ���
	return 0;
}