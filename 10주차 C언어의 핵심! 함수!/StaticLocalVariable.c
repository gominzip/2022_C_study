//#include <stdio.h>
//
//void SimpleFunc(void)  // ����X, ��ȯX
//{
//	static int num1 = 0;  // �ʱ�ȭ���� ������ 0 �ʱ�ȭ
//	int num2 = 0;  // �ʱ�ȭ���� ������ ������ �� �ʱ�ȭ
//	num1++, num2++;  // ��������
//	printf("static: %d, local: %d \n", num1, num2);  // static����, �������� ���
//}
//
//int main(void)
//{
//	int i;  // int�� ���� ����
//	for (i = 0; i < 3; i++)  // i �ʱ�ȭ, 3�� �ݺ�, ��������
//		SimpleFunc();  // �Լ�ȣ��
//	return 0;
//}