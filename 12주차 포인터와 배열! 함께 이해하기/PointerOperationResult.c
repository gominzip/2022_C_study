//#include <stdio.h>
//
//int main(void)
//{
//	int* ptr1 = 0x0010;  // int�� ������ ����, 16����, 10������ 16
//	double* ptr2 = 0x0010;  // double�� ������ ����, 16����, 10������ 16
//
//	printf("%p %p \n", ptr1 + 1, ptr1 + 2);  // 4 ����, 8 ����
//	printf("%p %p \n", ptr2 + 1, ptr2 + 2);  // 8 ����, 16 ����
//
//	printf("%p %p \n", ptr1, ptr2);  // ������ ���� ���� �� ���
//	ptr1++;  // 4 ����
//	ptr2++;  // 8 ����
//	printf("%p %p \n", ptr1, ptr2);  // ���� ��� Ȯ��
//	return 0;
//}