//#include <stdio.h>
//
//int main(void)
//{
//	double num = 3.14;  // double�� ���� ���� �� �ʱ�ȭ
//	double* ptr = &num;  // ���� num�� �ּ� �� ����
//	double** dptr = &ptr;  // ���� ������ dptr ����
//	double* ptr2;  // double�� ������ ptr2 ����
//
//	printf("%17p %17p \n", ptr, *dptr);  // ptr=*dptr
//	printf("%17g %17g \n", num, **dptr);  // num=**dptr
//	ptr2 = *dptr;  // ptr2=ptr
//	*ptr2 = 10.99;  // *ptr2=*ptr=num=10.99 ���� ����
//	printf("%17g %17g \n", num, **dptr);  // ����� num�� Ȯ��
//	return 0;
//}