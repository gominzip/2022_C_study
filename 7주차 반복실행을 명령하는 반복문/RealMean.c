#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double total = 0.0;  // double�� ���� ���� �� �ʱ�ȭ
	double input = 0.0;  // double�� ���� ���� �� �ʱ�ȭ
	int num = 0;  // int�� ���� ���� �� �ʱ�ȭ, �ʱ��
	
	for (; input >= 0.0;)  // ���ǽĸ� ����, ���� ������� ������ '��'���� ���ѷ��� ����
	{
		total += input;  // �հ迡 input ����
		printf("�Ǽ� �Է�(minus to quit) : ");
		scanf("%lf", &input);  // double�� ������ �Է��� ���� %lf ���
		num++;  // ������
	}
	printf("���: %f \n", total / (num - 1));  // �����(���) ���
	return 0;
}