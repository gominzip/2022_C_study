#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int x1, y1, x2, y2, area ; // ���� ����
	printf("�� ����� x, y ��ǥ: ");
	scanf("%d %d", &x1, &y1);  // �� ��� x y ��ǥ �Է�
	printf("�� �ϴ��� x, y ��ǥ: ");
	scanf("%d %d", &x2, &y2);  // �� �ϴ� x y ��ǥ �Է�

	area = (x2 - x1) * (y2 - y1);  // ���簢�� ���� ��� �� area ���� �ʱ�ȭ
	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�. \n", area);  // ����� ȣ��
	return 0;
}