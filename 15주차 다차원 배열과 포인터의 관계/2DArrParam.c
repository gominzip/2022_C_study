#include <stdio.h>
// �迭��� ��ü��� �Լ�
void ShowArr2DStyle(int(*arr)[4], int column)  // �迭������ �Ű����� arr, int�� �Ű����� column ����
{
	int i, j;  // int�� ���� ����
	for (i = 0; i < column; i++)  // ���޹��� ���� ���� ��ŭ �ݺ�
	{
		for (j = 0; j < 4; j++)  // ���� ���� 4��ŭ �ݺ�
			printf("%d ", arr[i][j]);  // �迭������ arr�� ����Ű�� �迭�� �迭��� ��ü ���
		printf("\n");
	}
	printf("\n");
}
// �迭����� �� ��ȯ �Լ�
int Sum2DArr(int arr[][4], int column)  // �迭������ �Ű����� arr, int�� �Ű����� column ����
{
	int i, j, sum = 0;  // int�� ���� ����
	for (i = 0; i < column; i++)  // ���޹��� ���� ���� ��ŭ �ݺ�
		for (j = 0; j < 4; j++)  // ���� ���� 4��ŭ �ݺ�
			sum += arr[i][j];  // arr�� ����Ű�� �迭�� �迭��� �� ��
	return sum;  // �迭����� �� ��ȯ
}

int main(void)
{
	int arr1[2][4] = { 1,2,3,4,5,6,7,8 };  // ����2 ����4 int�� 2���� �迭 ����
	int arr2[3][4] = { 1,1,1,1,3,3,3,3,5,5,5,5 };  // ����3 ����4 int�� 2���� �迭 ����

	ShowArr2DStyle(arr1, sizeof(arr1) / sizeof(arr1[0]));  // �Լ�ȣ��, �迭�̸� arr1, arr1�� ���� ���� ����
	ShowArr2DStyle(arr2, sizeof(arr2) / sizeof(arr2[0]));  // �Լ�ȣ��, �迭�̸� arr2, arr2�� ���� ���� ����
	printf("arr1�� ��: %d \n", Sum2DArr(arr1, sizeof(arr1) / sizeof(arr1[0])));  // �Լ�ȣ��, arr1 �迭����� �� ���
	printf("arr1�� ��: %d \n", Sum2DArr(arr2, sizeof(arr2) / sizeof(arr2[0])));  // �Լ�ȣ��, arr2 �迭����� �� ���
	return 0;
}