#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void DesSort(int ary[], int len)  // �Լ� ����, ������ �Ű����� ary ����, ���� �� ����
{
	int i, j;
	int temp;  // �迭 �� �̵��� ���� ����

	for (i = 0; i < len - 1; i++)  // len-1�� �ݺ�, �������� ����
	{
		for (j = 0; j< len-1-i; j++)  
		{
			if (ary[j] < ary[j + 1])  // arr[j]�� arr[j+1]���� ������
			{
				temp = ary[j];  // arr[j]�� arr[j+1] ���� ����
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}  // ���� ���� ���ϸ� ���� �迭��ҷ� �̵�
		}
	}
}

int main(void)
{
	int arr[7];  // ����7 int�� �迭 ����
	int i;  // int�� ���� ����

	for (i = 0; i < 7; i++)  // arr �ʱ�ȭ �ݺ���
	{
		printf("�Է�: ");
		scanf("%d", &arr[i]);  // ���� �Է�, arr�ʱ�ȭ
	}

	DesSort(arr, sizeof(arr) / sizeof(int));  // �Լ�ȣ��, �迭�� �迭 ���� ����
	for (i = 0; i < 7; i++)  // ������������ ������ �迭 ���
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}
