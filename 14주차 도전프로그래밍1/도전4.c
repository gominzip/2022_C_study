#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int money;  //int�� ���� ����
	int b, s, c;  // ũ����, �����, �ݶ� ���� ���� ����

	printf("���� ����� �����ϰ� �ִ� �ݾ� :");
	scanf("%d", &money);  // ���� �ݾ� �Է�

	for (b = 1; b < money / 500; b++)  // ũ���� �ݺ�
		for (s = 1; s < money / 700; s++)  // ����� �ݺ�
			for (c = 1; c < money / 400; c++)  // �ݶ� �ݺ�
			{
				if (b * 500 + s * 700 + c * 400 == money)  // �ܵ� ���� ���� �����ϸ�
					printf("ũ���� %d��, ����� %d��, �� �� %d�� \n", b, s, c);  // ����� �� ���
			}

	printf("\n");
	return 0;
}