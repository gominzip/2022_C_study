//#include <stdio.h>
//
//void ShowArayElem(int* param, int len)  // ���޹��� ������ �ּ� ���� ������ ���������� �Ű������� ����
//{
//	int i;  // int�� ���� ����
//	for (i = 0; i < len; i++)  // �迭�� ���̸�ŭ �ݺ�
//		printf("%d ", param[i]);  // �迭��ҿ� ����� �� ���
//	printf("\n");
//}
//
//int main(void)
//{
//	int arr1[3] = { 1,2,3 };  // ���� 3 int�� �迭 ���� �� �ʱ�ȭ
//	int arr2[5] = { 4,5,6,7,8 };  // ���� 5 int�� �迭 ���� �� �ʱ�ȭ
//	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));  // �Լ�ȣ�� �� ��������
//	ShowArayElem(arr2, sizeof(arr2) / sizeof(int));
//	return 0;
//}