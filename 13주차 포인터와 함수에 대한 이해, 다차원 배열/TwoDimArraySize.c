#include <stdio.h>

int main(void)
{
	int arr1[3][4];  // ���� 3, ���� 4�� int�� 2���� �迭
	int arr2[7][9];  // ���� 7, ���� 9�� int�� 2���� �迭
	printf("����3, ����4: %d \n", sizeof(arr1));  // arr1 ũ�� ���
	printf("����7, ����9: %d \n", sizeof(arr2));  // arr2 ũ�� ���
	return 0;
}