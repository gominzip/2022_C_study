#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void Odd(int* ptr)  // Ȧ�� ��� �Լ�, ������ �Ű����� ����
{
	int i;  // int�� ���� ����
	printf("Ȧ�� ���: ");
	for (i = 0; i < 10; i++)  // 10�� �ݺ�
	{
		if (ptr[i] % 2 != 0)  // ptr[i]�� Ȧ����
			printf("%d ", ptr[i]);  // Ȧ�� ���
	}
	printf("\n");
}

void Even(int* ptr)  // ¦�� ��� �Լ�, ������ �Ű����� ����
{
	int i;
	printf("¦�� ���: ");
	for (i = 0; i < 10; i++)
	{
		if (ptr[i] % 2 == 0)  // ptr[i]�� ¦����
			printf("%d ", ptr[i]);  // ¦�� ���
	}
	printf("\n");
}

int main(void)
{
	int arr[10];  // ����10 int�� �迭 ����
	int i;  // int�� ���� ����

	printf("�� 10���� ���� �Է� \n");
	for (i = 0; i < 10; i++)  // 10�� �ݺ�
	{
		printf("�Է�: ");
		scanf("%d", &arr[i]);  // ���� �Է� �� �迭 �ʱ�ȭ
	}

	printf("\n");
	Odd(arr);  // �Լ�ȣ�� �� ���ڷ� �迭 ����
	Even(arr);  // �Լ�ȣ�� �� ���ڷ� �迭 ����
	return 0;
}