#include <stdio.h>

int main(void)
{
	int arr1[3][2];  // ����3 ����2 int�� 2���� �迭 ����
	int arr2[2][3];  // ����2 ����3 int�� 2���� �迭 ����

	printf("arr1: %p \n", arr1);  // �迭�̸� arr1 ���
	printf("arr1+1: %p \n", arr1+1);  // �迭�̸�arr1+sizeof(int)+sizeof(int) ���
	printf("arr1+2: %p \n\n", arr1+2);  // �迭�̸�arr1+sizeof(int)+sizeof(int)+sizeof(int)+sizeof(int) ���

	printf("arr2: %p \n", arr2);  // �迭�̸� arr2 ���
	printf("arr2+1: %p \n", arr2+1);  // �迭�̸�arr2+sizeof(int)+sizeof(int)+sizeof(int) ���
	return 0;
}