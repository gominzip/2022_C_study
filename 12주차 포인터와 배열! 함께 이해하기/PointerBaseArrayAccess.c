#include <stdio.h>

int main(void)
{
	int arr[3] = { 11,22,33 };  // ���� 3, int�� �迭
	int* ptr = arr;  // int * ptr = &arr[0];�� ���� ����
	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));  // �ּ� �״�� ���, 4 ����, 8 ���� >> ����� ���� ���� X

	printf("%d ", *ptr); ptr++;  // �״��, ��������  >> ����� �� ��ü�� ����
	printf("%d ", *ptr); ptr++;  // 4 ����, ��������
	printf("%d ", *ptr); ptr--;  // 4 ����, ��������
	printf("%d ", *ptr); ptr--;  // 4 ����, ��������
	printf("%d ", *ptr); printf("\n");  // 4 ����
	return 0;
}