#include <stdio.h>

int main(void)
{
	int arr1[5] = { 1,2,3,4,5 };  // ���������� �ʱ�ȭ
	int arr2[] = { 1,2,3,4,5,6,7 };  // �ڵ����� �������� ����
	int arr3[5] = { 1,2 };  // ����ִ� �迭��Ҵ� 0����
	int ar1Len, ar2Len, ar3Len, i;  // int�� ���� ����

	printf("�迭 arr1�� ũ��: %d \n", sizeof(arr1));
	printf("�迭 arr2�� ũ��: %d \n", sizeof(arr2));
	printf("�迭 arr3�� ũ��: %d \n", sizeof(arr3));

	ar1Len = sizeof(arr1) / sizeof(int);  // �迭 arr1�� ���� ���
	ar2Len = sizeof(arr2) / sizeof(int);  // �迭 arr2�� ���� ���
	ar3Len = sizeof(arr3) / sizeof(int);  // �迭 arr3�� ���� ���

	for (i = 0; i < ar1Len; i++)  // arr1�� ���̸�ŭ �ݺ�
		printf("%d ", arr1[i]);  // ����� �� ���
	printf("\n");

	for (i = 0; i < ar2Len; i++)  // arr2�� ���̸�ŭ �ݺ�
		printf("%d ", arr2[i]);  // ����� �� ���
	printf("\n");

	for (i = 0; i < ar3Len; i++)  // arr3�� ���̸�ŭ �ݺ�
		printf("%d ", arr3[i]);  // ����� �� ���
	printf("\n");
	return 0;
}