#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int arr[10];  // ����10 int�� �迭 ����
	int i, n;  // int�� ���� ����
	int a = 0, b = 0;  // �迭��ġ ������ ���� ����

	printf("�� 10���� ���� �Է� \n");
	for (i = 0; i < 10; i++)  // 10�� �ݺ�
	{
		printf("�Է�: ");
		scanf("%d", &n);  // ���� �Է� �� n�� ����
		if (n % 2 != 0){  // n�� Ȧ����
			arr[a] = n;  // arr�� �պκп� ����
			a++;  // a 1����
		}
		else{  // n�� ¦����
			arr[9 - b] = n;  // arr�� �޺κп� ����
			b++;  // b 1����
		}
	}

	printf("�迭 ����� ��� : ");
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);  // arr �迭��� �� ���
	printf("\n");
	return 0;
}