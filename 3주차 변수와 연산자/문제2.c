//�� ���� ���� �Է� ���� �� num1 x num2 + num3 ��� ����ϱ�
#include <stdio.h>

int main(void)
{
	int num1, num2, num3;  // ���� num1, num2, num3 ����
	printf("�� ���� ������ �Է��ϼ��� :"); 
	scanf("%d %d %d", &num1, &num2, &num3);  // ���� �Է�
	printf("%d x %d + %d = %d \n", num1, num2, num3, num1 * num2 + num3);
	return 0;
}