#include <stdio.h>

int main(void)
{
	int num = 100;  // int�� ���� ���� �� �ʱ�ȭ
	int* ptr = &num;  // num�� ����Ű�� int�� ������ ���� ptr
	int** dptr = &ptr;  // ������ ���� ptr�� ����Ű�� ���� ������ ���� dptr
	int*** tptr = &dptr;  // ���� ������ dptr�� ����Ű�� ���� ������ ���� tptr

	printf("%d %d \n", **dptr, ***tptr);
	return 0;
}