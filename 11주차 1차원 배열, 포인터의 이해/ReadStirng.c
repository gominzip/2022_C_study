#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char str[50];  // ���� 50�� char�� �迭 ����
	int idx = 0;  // int�� ���� ���� �� �ʱ�ȭ

	printf("���ڿ� �Է�: ");
	scanf("%s", str);  // ���ڿ� �Է� ���� �� str�� ����, &������ X
	printf("�Է� ���� ���ڿ�: %s \n", str);  // ���ڿ� ���

	printf("���� ���� ���: ");
	while (str[idx] != '\0')  // null ���ڸ� �ݺ� ����
	{
		printf("%c", str[idx]);  // ���� ���� ���
		idx++;  // ��������
	}
	printf("\n");
	return 0;
}