#include <stdio.h>

int main(void)
{
	char ch1 = 'A', ch2 = 65;  // char �ڷ������� ���� ch1, ch2 ���� �� �ʱ�ȭ
	int ch3 = 'Z', ch4 = 90;  // int �ڷ������� ���� ch3, ch4 ���� �� �ʱ�ȭ

	printf("%c %d \n", ch1, ch1);  // ���Ĺ��� %d�� �����͸� ������ ���·� ���
	printf("%c %d \n", ch2, ch2);  // ���Ĺ��� %c�� �����͸� ������ ���·� ���
	printf("%c %d \n", ch3, ch3);
	printf("%c %d \n", ch4, ch4);
	return 0;
}