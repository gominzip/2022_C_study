//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//int Fibo(int num)
//{
//	int f1 = 0, f2 = 1, f3, i;
//	if (num == 1)
//		printf("%d ", f1);  // 1 �Է� �� 0 ��� 
//	else
//		printf("%d %d ", f1, f2);  // �� ���� �� �Է� �� �켱 0,1 ���
//	
//	for (i = 0; i < num - 2; i++)  // i=num-2 �̸� �ݺ�
//	{
//		f3 = f1 + f2;  // ����° �� ���
//		printf("%d ", f3);
//		f1 = f2;  // ù��° ���� �ι�° �� �Ҵ�
//		f2 = f3;  // �ι�° ���� ����° �� �Ҵ�
//	}
//	printf("\n");
//}
//
//int main(void)
//{
//	int num;
//	
//	printf("����ϰ��� �ϴ� �Ǻ���ġ ������ ����: ");
//	scanf("%d", &num);  // ���� �Է�
//	if (num < 1)  // 1 �̸��� ���� �Է� ��
//	{
//		printf("1�̻��� �� �Է�");
//		return -1;  // ���� �߻�
//	}
//	Fibo(num);  // �Լ� ȣ��
//	return 0;
//}