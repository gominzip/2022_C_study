#include <stdio.h>

int main(void)
{
	int num;
	printf("start! ");

	for (num = 1; num < 20; num++)  // num 1�� �ʱ�ȭ, num=20 ������ �ݺ�, num 1�� ����
	{
		if (num % 2 == 0 || num % 3 == 0)  // 2�� 3�� ����� ����
			continue;  // �ݺ����� ���ǰ˻�� �̵�, ���� �� 12���� ������� ����
		printf("%d ", num);  // 2�� 3�� ����� �ƴ� �͸� ���
	}
	printf("end! \n");
	return 0;
}