//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//void Gugudan(int n1, int n2)  // ���� �� ����
//{
//	int a = (n1 < n2) ? (n1) : (n2);  // �������� ����, ���� �� ���� ���� a �ʱ�ȭ
//	int b = (n1 < n2) ? (n2) : (n1);  // �������� ����, ���� �� ū ���� b �ʱ�ȭ
//	int i;
//
//	for (; a < b + 1; a++)  // a�� ��� �ݺ���
//	{
//		for (i = 1; i < 10; i++)  // 1~9���� �ݺ�
//		{
//			printf("%d x %d = %d \n", a, i, a * i);  // a�� ���
//		}
//		printf("\n");
//	}
//}
//
//int main(void)
//{
//	int n1, n2;  // int�� ���� ����
//	printf("�� ���� ���� �Է�: ");
//	scanf("%d %d", &n1, &n2);  // ���� �Է�
//	Gugudan(n1, n2);  // �Լ� ȣ��, ���� ����
//	return 0;
//}