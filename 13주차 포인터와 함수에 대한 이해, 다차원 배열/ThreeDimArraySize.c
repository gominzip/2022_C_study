#include <stdio.h>

int main(void)
{
	int arr1[2][3][4];  // ����2, ����3, ����4 int�� �迭 ����
	double arr2[5][5][5];  //����5, ����5, ����5 double�� �迭 ����
	printf("����2, ����3, ����4 int�� �迭: %d \n", sizeof(arr1));  // int�� �迭 arr1 ũ�� ���
	printf("����5, ����5, ����5 double�� �迭: %d \n", sizeof(arr2));  // double�� �迭 arr2 ũ�� ���
	return 0;
}