#include <stdio.h>

int main(void)
{
	int arr2d[3][3];  // ����3 ����3 int�� 2���� �迭 ����
	printf("%d \n", arr2d);  // ù ��° ��� �ּҰ� ���
	printf("%d \n", arr2d[0]);  // 1���� ù ��° �迭��� �ּҰ� ���
	printf("%d \n\n", &arr2d[0][0]);  // arr2d[0][0]�� �ּҰ� ���

	printf("%d \n", arr2d[1]);  // 2���� ù ��° �迭��� �ּҰ� ���
	printf("%d \n\n", &arr2d[1][0]);  // arr2d[1][0]�� �ּҰ� ���

	printf("%d \n", arr2d[2]);  // 3���� ù ��° �迭��� �ּҰ� ���
	printf("%d \n\n", &arr2d[2][0]);  // arr2d[2][0]�� �ּҰ� ���

	printf("sizeof(arr2d): %d \n", sizeof(arr2d));  // �迭��ü�� ũ�� ��ȯ
	printf("sizeof(arr2d[0]): %d \n", sizeof(arr2d[0]));  // 1���� ũ�� ��ȯ
	printf("sizeof(arr2d[1]): %d \n", sizeof(arr2d[1]));  // 2���� ũ�� ��ȯ
	printf("sizeof(arr2d[2]): %d \n", sizeof(arr2d[2]));  // 3���� ũ�� ��ȯ
	return 0;
}