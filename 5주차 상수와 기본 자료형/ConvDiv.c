#include <stdio.h>

int main(void)
{
	int num1 = 3, num2 = 4;  // int�� ���� ���� �� �ʱ�ȭ
	double divResult;  // double�� ���� ����
	divResult = (double)num1 / num2;  // �� ��ȯ �����ڸ� �̿��� ���� num1�� ���� double������ ���� ��ȯ
	printf("������ ���: %f \n", divResult);  // double�� ���� ���
	return 0;
}