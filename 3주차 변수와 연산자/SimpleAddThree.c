#include <stdio.h>

int main(void)
{
	int result;
	int num1, num2;

	printf("���� one: ");
	scanf("%d", &num1);  // Ű����� �Էµ� ������ ���� num1�� ����
	printf("���� two: ");
	scanf("%d", &num2);  // Ű����� �Էµ� ������ ���� num2�� ����

	result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);
	return 0;
}