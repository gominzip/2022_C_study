#include <stdio.h>

int main(void)
{
	char ch = 9;  // char �ڷ������� ���� ���� �� �ʱ�ȭ
	int inum = 1052;  // int �ڷ������� ���� ���� �� �ʱ�ȭ
	double dnum = 3.1415;  // double �ڷ������� ���� ���� �� �ʱ�ȭ
	printf("���� ch�� ũ��: %d \n", sizeof(ch));  // 8~10�� sizeof �����ڸ� ���� ������ ũ�� Ȯ��
	printf("���� inum�� ũ��: %d \n", sizeof(inum));
	printf("���� dnum�� ũ��: %d \n", sizeof(dnum));

	printf("char�� ũ��: %d \n", sizeof(char));  // 12~17�� sizeof �����ڸ� ���� �ڷ����� ũ�� Ȯ��
	printf("int�� ũ��: %d \n", sizeof(int));
	printf("long�� ũ��: %d \n", sizeof(long));
	printf("long long�� ũ��: %d \n", sizeof(long long));
	printf("float�� ũ��: %d \n", sizeof(float));
	printf("double�� ũ��: %d \n", sizeof(double));
	return 0;
}