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
//void AddArayElement(int* param, int len, int add)  // 3���� ���ڸ� �Ű������� ����
//{
//	int i;
//	for (i = 0; i < len; i++)
//		param[i] += add;  // i��° �迭�� ����� ���� add ���� ���� ���� ����
//}
//
//int main(void)
//{
//	int arr[3] = { 1,2,3 };  // ���� 3 int�� �迭 ���� �� �ʱ�ȭ
//	AddArayElement(arr, sizeof(arr) / sizeof(int), 1);  // �迭��ҿ� ������ ���ϴ� AddArayElement �Լ�ȣ�� �� ��������
//	ShowArayElem(arr, sizeof(arr) / sizeof(int));  // �迭��Ҹ� ����ϴ� ShowArayElem �Լ�ȣ��
//
//
//	AddArayElement(arr, sizeof(arr) / sizeof(int), 2);  // 2 ���ϱ�
//	ShowArayElem(arr, sizeof(arr) / sizeof(int));
//
//	AddArayElement(arr, sizeof(arr) / sizeof(int), 3);  // 3 ���ϱ�
//	ShowArayElem(arr, sizeof(arr) / sizeof(int));
//	return 0;
//}