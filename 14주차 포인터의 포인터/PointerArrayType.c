#include <stdio.h>

int main(void)
{
	int num1 = 10, num2 = 20, num3 = 30;  // int�� ���� ���� �� �ʱ�ȭ
	int* ptr1 = &num1;  // *ptr1 = num1
	int* ptr2 = &num2;  // *ptr2 = num2
	int* ptr3 = &num3;  // *ptr3 = num3

	int* ptrArr[] = { ptr1,ptr2,ptr3 };  // int�� ������ �迭 ptrArr ���� �� �ʱ�ȭ
	int** dptr = ptrArr;  // ������ �迭�� ����Ű�� ���� ������, *dptr = ptrArr 

	printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));  
	printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2]));  
	return 0;
}