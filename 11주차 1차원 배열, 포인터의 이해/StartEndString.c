#include <stdio.h>

int main(void)
{
	char str[50] = "I like C programming";  // ���� 50�� char�� �迭 ���� �� ���ڿ� �ʱ�ȭ
	printf("string: %s \n", str);  // ���ڿ� ���

	str[8] = '\0';  // 9��° ��ҿ� �� ���� ����
	printf("string: %s \n", str);  // ���ڿ� ���

	str[6] = '\0';  // 7��° ��ҿ� �� ���� ����
	printf("string: %s \n", str);  // ���ڿ� ���

	str[1] = '\0';  // 2��° ��ҿ� �� ���� ����
	printf("string: %s \n", str);  // ���ڿ� ���
	return 0;
}