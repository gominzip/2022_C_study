#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num;  // ���� ����
	int i=0, total = 0;  // Ƚ�����, �հ踦 ���� ���� ���� �� �ʱ�ȭ

	while (i < 5)  // 5�� ���� �Է��� ���� �ݺ���
	{
		printf("1 �̻��� ���� �Է� : ");
		scanf("%d", &num);  // ���� �Է�
		while (num<1)  // 1�̸��� ���� �Է� �� �ݺ��� ����
		{
			printf("1 �̻��� ������ �ٽ� �Է��ϼ��� : ");
			scanf("%d", &num);  //�ٽ� ���� �Է�
		}
		total += num;  // 1�̻� ���� �Է½� total�� ������
		i++;  // Ƚ�� �߰�
	}
	printf("�հ� : %d \n", total);  //�հ� ���
	return 0;
}