#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char voca[100];  // ���� 100�� char�� �迭 ����
	char temp;  // ������ ������ ���� ����
	int i, len = 0;  // int�� ���� ���� �� �ʱ�ȭ

	printf("�ܾ� �Է�: ");
	scanf("%s", voca);  // ���ڿ� �Է� ���� �� voca�� ����

	while (voca[len] != '\0')  // �� ���� �� �ݺ� �ߴ�
		len++;  // ���� ���

	for (i = 0; i < len/2; i++)  // ���ܾ� ������
	{
		temp = voca[i];  // ���� ���� �ӽ� ����
		voca[i] = voca[(len - i) - 1];  // ���� ���ڸ� ������
		voca[(len - i - 1)] = temp;  // ���� ���ڸ� �ڷ�
	}
	printf("%s \n", voca);  // ������ �ܾ� ���
	return 0;
}