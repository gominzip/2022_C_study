//#include <stdio.h>
//
//int main(void)
//{
//	int arr[5] = { 1,2,3,4,5 };  // int�� �迭 ����
//	int* ptr = &arr[4];  // int�� ������ ���� ����, ������ �迭��� �ּ� �� ����
//	int total=0, i;  // int�� ���� ����
//
//	for (i = 0; i < 5; i++)  // 5�� �ݺ�
//		total += *(ptr--);  // �������ҷ� �迭��� ���� �� total�� ���ϱ�
//
//	printf("%d \n", total);  // total ���
//	return 0;
//}