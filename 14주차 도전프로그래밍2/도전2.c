//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main(void)
//{
//	int n, cnt = 0;  // int�� ���� ����
//	int arr[50];  // ���� 50 int�� �迭 ����
//
//	printf("10���� ���� �Է�: ");
//	scanf("%d", &n);  // ���� �Է�
//
//	while (n != 0)  // n==0�̸� �ݺ��� Ż��
//	{
//		arr[cnt] = n % 2;  // 2���� ��ȯ
//		n = n / 2;
//		cnt++;
//	}
//
//	while (cnt > 0)  // cnt��°���� 0��° �迭��ұ��� ��� �Ϸ��ϸ� Ż��
//		printf("%d", arr[--cnt]); // ���� �迭 ������ ���
//	printf("\n");
//	return 0;
//}