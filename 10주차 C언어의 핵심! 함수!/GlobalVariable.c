#include <stdio.h>
void Add(int val);  // �Ѽ� ����, ��ȯ x
int num;  // ���������� �⺻ 0���� �ʱ�ȭ��

int main(void)
{
	printf("num: %d \n", num);  // �������� num ���
	Add(3);  // �Լ�ȣ��
	printf("num: %d \n", num);  // �������� num ���  
	num++;  // �������� num ��������
	printf("num: %d \n", num);  // �������� num ���
	return 0;
}

void Add(int val)  // �Լ�����
{
	num += val;  // �������� num�� �� val��ŭ ����
}