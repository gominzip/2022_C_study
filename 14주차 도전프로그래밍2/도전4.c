#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char str[50];  // ����50 char�� ���ڿ� ����
	int i, len=0;  

	printf("���ڿ� �Է�: ");
	scanf("%s", str);  // ���ڿ� �Է�, �迭 str�� ����
	
	while (str[len] != '\0')  // null���ڰ� ������ �ݺ��� Ż��
		len++;  // ���ڿ� ���� ���ϱ�

	for (i = 0; i < len / 2; i++)  // ȸ�� �˻� �ݺ���
	{
		if (str[i] != str[len - 1 - i])  // ��ġ�Ǵ� ��ġ�� ���ڰ� ��ġ���� ���� ��
		{
			printf("ȸ���� �ƴմϴ�.");  // ȸ�� �ƴ��� �˸�
			return 0;  // ���α׷� ����
		}
	}
	printf("ȸ�� �Դϴ�. \n");  // ��� ��ġ�ϰ� �ݺ����� ������ �� ���
	return 0;  // ���α׷� ����
}
