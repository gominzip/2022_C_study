#include <stdio.h>

int main(void)
{
	int arr[] = { 1,2,3,4,5 };  // int�� �迭 ����
	int* ptr = arr;  // int�� ������ ���� ����
	int i;  // int�� ���� ����
	for (i = 0; i < 5; i++)  // 5�� �ݺ�
	{
		*ptr += 2;  // �迭��� �� 2 ����
		ptr++;  // ptr 1 ���� >> 4 ����
	}

	for (i = 0; i < 5; i++)  // 5�� �ݺ�
		printf("%d ", arr[i]);  // i��° �迭 ��� ���
	
	printf("\n");
	return 0;
}