#include <stdio.h>

int main(void)
{
	int arr[5];  // ���� 5�� int�� �迭, �̸� arr
	int sum = 0, i;  // int�� ���� ����

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;  // ù ��° �迭��Һ��� ������ �迭��ұ��� �� ���� 

	for (i = 0; i < 5; i++)  // 5�� �ݺ�
		sum += arr[i];  // �迭��ҿ� ����� �� ���� sum�� ����

	printf("�迭��ҿ� ����� ���� ��: %d \n", sum);  // sum ���
	return 0;
}