#include <stdio.h>

int main(void)
{
	char str[] = "Good morning!";  // char�� �迭 ����, ���ڿ� �ʱ�ȭ
	printf("�迭 str�� ũ��: %d \n", sizeof(str));  // ���ڿ� ũ�� ���
	printf("�� ���� ������ ���: %c \n", str[13]);  // �� ���� ��ü Ȯ��
	printf("�� ���� ������ ���: %d \n", str[13]);

	str[12] = '?';  // ���ڿ� ������ ����
	printf("���ڿ� ���: %s \n", str);  // ���Ĺ��� %s�� ���ڿ� ���
	return 0;
}