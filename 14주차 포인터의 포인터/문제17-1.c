//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//void MaxAndMin(int* arr, int size, int** mxPtr, int** mnPtr)  // ������ �Ű����� arr, ���� ������ �Ű����� mxPtr mnPtr ����
//{
//	int i;  // int�� ���� ����
//	int* max, * min;  // int�� ������ ���� ����
//
//	max = min = &arr[0];  // ������ ������ arr[0]�� �ּҰ� ����
//	for (i = 0; i < size; i++)
//	{
//		if (*max < arr[i])  // max�� ����Ű�� ����� ������ arr[i]�� ũ��
//			max = &arr[i];  // max�� arr[i] �ּ� �� ����
//		if (*min > arr[i])  // min�� ����Ű�� ����� ������ arr[i]�� ������
//			min = &arr[i];  // min�� arr[i] �ּ� �� ����
//	}
//
//	*mxPtr = max;  // *mxPtr=maxPtr=max
//	*mnPtr = min;  // *mnPtr=minPtr=min
//}
//
//int main(void)
//{
//	int* maxPtr;  // int�� ������ ���� ����
//	int* minPtr;  // int�� ������ ���� ����
//	int arr[5];  // ���� 5 int�� �迭 ����
//	int i;  // int�� ���� ����
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("�Է�: ");
//		scanf("%d", &arr[i]);  // �迭��� �Է�
//	}
//
//	MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxPtr, &minPtr);  // �迭 �̸�, �迭��� ����, maxPtr�� minPtr �ּҰ� ����
//	printf("�ִ�: %d  �ּ�: %d \n", *maxPtr, *minPtr);  // �ִ� �ּڰ� ���
//	return 0;
//}