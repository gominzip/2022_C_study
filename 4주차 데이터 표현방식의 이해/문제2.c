#include <stdio.h>

int main(void)
{
	int num = 3;
	num = num << 3;  // 8 ���ϱ�, ��Ʈ�� ���� �������� 3ĭ �̵�
	num = num >> 2;  // 4 ������, ��Ʈ�� ���� ���������� 2ĭ �̵�
	printf("%d \n", num);
	return 0;
}