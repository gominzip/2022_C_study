#include <stdio.h>

int main(void)
{
	char str1[] = "My Stirng";  // ���� ������ ���ڿ�
	char* str2 = "Your String";  // ��� ������ ���ڿ�
	printf("%s %s \n", str1, str2);  // ���ڿ� ���

	str2 = "Our String";  // ����Ű�� ��� ����
	printf("%s %s \n", str1, str2);

	str1[0] = 'X';  // ���ڿ� ���� ����
	str2[0] = 'X';  // ���ڿ� ���� ����
	printf("%s %S \n", str1, str2);  // ���ڿ� ���
	return 0;
}