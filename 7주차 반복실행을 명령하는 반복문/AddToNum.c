#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int total = 0;  // int�� ���� ���� �� �ʱ�ȭ
	int i, num;  // int�� ���� ����
	printf("0���� num������ ����, num��? ");
	scanf("%d", &num);  // ���� num �ʱ�ȭ �� �Է�

	for (i = 0; i < num + 1; i++) //for��, i �ʱ�ȭ, i=0���� num���� �ݺ�, 1�� ����
		total += i;  // total=total+1

	printf("0���� %d������ �������: %d \n", num, total);  // ������� ���
	return 0;
}