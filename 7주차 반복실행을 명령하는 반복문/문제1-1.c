#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num, re=0;  // int�� ���� ����, Ƚ������� ���� ���� �ʱ�ȭ
	printf("���� ������ �Է�: ");
	scanf("%d", &num);  // ���� �Է�
	
	while (re < num)  // re�� num-1�� �� ������ �ݺ� = num�� �ݺ�
	{
		printf("Hello world! \n");  // ���ڿ� ���
		re++;  // re = re+1
	}
	return 0;
}