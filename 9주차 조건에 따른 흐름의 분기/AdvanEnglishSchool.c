#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char sel;  // char�� ���� ����
	printf("M ����, A ����, E ���� \n");
	printf("�Է�: ");
	scanf("%c", &sel);  // ���� �Է�

	switch (sel)  // ���� sel�� ���� �Է�
	{
	case 'M':
	case 'm':
		printf("Morning \n");  // M�̳� m�̸� ����
		break;  // �ݺ��� Ż��
	case 'A':
	case 'a':
		printf("Afternoon \n");  // A�� a�� ����
		break;  // �ݺ��� Ż��
	case 'E':  
	case 'e':
		printf("Evening \n");  // E�� e�� ����
		break;  // ��ǻ� ���ʿ�
	}
	return 0;
}