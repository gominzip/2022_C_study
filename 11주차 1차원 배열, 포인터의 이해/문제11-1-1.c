//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main(void)
//{
//	int arr[5];  // ���� 5�� int�� �迭 ����
//	int max, min,i, sum=0;  // int�� ���� ����
//
//	for (i = 0; i < 5; i++)  // 5�� �ݺ�
//	{
//		printf("���� �Է�: ");
//		scanf("%d", &arr[i]);  // i��° �迭��ҿ� ���� �� �Է�
//	}
//
//	max = min = sum = arr[0];  // ��� 1��° �迭��� ������ �ʱ�ȭ
//	for (i = 1; i < 5; i++)
//	{
//		sum += arr[i];  // ��� �迭 ����� �� ���
//		if (max < arr[i])
//			max = arr[i];  // �ִ����� max ���Ҵ�
//		if (min > arr[i])
//			min = arr[i];  // �ּڰ����� min ���Ҵ�
//	}
//	
//	printf("�ִ�: %d \n", max);  // �ִ� ���
//	printf("�ּڰ�: %d \n", min);  // �ּڰ� ���
//	printf("�� ��: %d \n", sum);  //  �� �� ���
//	return 0;
//}