//#include <stdio.h>
//
//int main(void)
//{
//	int i, j;
//	int cnt = 0;
//
//	for (i = 2; cnt < 10; i++)  // cnt=10�Ǹ� �ݺ��� ��
//	{
//		for (j = 2; j <= i; j++) 
//		{
//			if (i % j == 0 && j != i)  // i�� �ƴ� j�� i�� ������������ �Ҽ��� �ƴ�
//				break;  // 10�� �ݺ��� Ż�� �� i 1����
//
//			else if (i == j)  // i�� i=j�θ� ������������ �Ҽ�
//			{
//				printf("%d ", i);  // �Ҽ� i ���
//				cnt += 1;  // ī��Ʈ ����
//			}
//
//			else  // �� ���� ���
//				continue;  // 12������ �̵�
//		}
//	}
//	printf("\n");
//	return 0;
//}