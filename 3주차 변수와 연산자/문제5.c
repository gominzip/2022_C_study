//�� ���� ���� (num1 - num2) x (num2 + num3) x (num3 % num1)
#include <stdio.h>

int main(void)
{
	int num1, num2, num3;  // ���� num1, num2, num3 ����
	int result; // ���� result ����
	printf("�� ������ �Է��ϼ��� :");
	scanf("%d %d %d", &num1, &num2, &num3);  // ���� �Է�
	result = (num1 - num2) * (num2 + num3) * (num3 % num1);  // ���� result�� �� �Ҵ�
	printf("������ : %d \n", result);
	return 0;
}