#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num, re = 0;  // int�� ���� ����, Ƚ������� ���� ���� �ʱ�ȭ
	printf("���� ���� �Է�: ");
	scanf("%d", &num);  // ���� �Է�

	while (re < num)  // �ݺ����� ����
	{
		printf("%d ", 3 * (re + 1));  //3*1���� �����ؾ��ϹǷ� re+1
		re++;  // re=re+1
	}
	return 0;
}