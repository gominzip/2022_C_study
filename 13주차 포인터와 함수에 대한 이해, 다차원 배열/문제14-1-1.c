//#include <stdio.h>
//
//int SquareByValue(int n)  // Call-by-value ���
//{
//	return n * n;  // ������ ��ȯ
//}
//
//void SquareByReference(int* ptr)  // Call-by-reference ���
//{
//	int num = *ptr;  // �Ű������� *ptr�� ����� �� ����
//	*ptr = num * num;  // *ptr=num�� ������ ����
//}
//
//int main(void)
//{
//	int num = 7;  // int�� ���� ���� �� �ʱ�ȭ
//	printf("%d \n", SquareByValue(num));  // �Լ�ȣ��, ��ȯ�� ���
//	SquareByReference(&num);  // ���� �ּҰ� ����
//	printf("%d \n", num);  // num ���
//	return 0;
//}