#include <stdio.h>
int Add(int val);  // �Լ� ����
int num = 1;  // �������� 1�� �ʱ�ȭ

int main(void)
{
	int num = 5;  // int�� ���� ���� �� �ʱ�ȭ
	printf("num: %d \n", Add(3));  // �Լ� ȣ��
	printf("num: %d \n", num+9); 
	return 0;  
}

int Add(int val)  // �Լ� ����
{
	int num = 9;  // ���� �̸� ���� ���� ���� �� �ʱ�ȭ
	num += val;  // num=num+val
	return num;  // num ��ȯ
}