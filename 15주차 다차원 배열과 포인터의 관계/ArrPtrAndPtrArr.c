//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 10, num2 = 20, num3 = 30, num4 = 40;  // int�� ���� ���� �� �ʱ�ȭ
//	int arr2d[2][4] = { 1,2,3,4,5,6,7,8 };  // ����2 ����4 int�� �迭arr2d ����
//	int i, j;
//
//	int* whoA[4] = { &num1, &num2,&num3,&num4 };  // int�� ������ �迭 ����
//	int(*whoB)[4] = arr2d;  // ���α��̰� 4�� int�� 2���� �迭�� ����Ű�� �迭 ������ ����
//
//	printf("%d %d %d %d \n", *whoA[0], *whoA[1], *whoA[2], *whoA[3]);  // ������ �迭 �� �ּҰ� ����Ű�� �迭����� �� ���
//	for (i = 0; i < 2; i++)  // ����2�� �ݺ�
//	{
//		for (j = 0; j < 4; j++)  // ����4�� �ݺ�
//			printf("%d ", whoB[i][j]);  // arr2d�� �迭��� ��ü ���
//		printf("\n");
//	}
//	return 0;
//}