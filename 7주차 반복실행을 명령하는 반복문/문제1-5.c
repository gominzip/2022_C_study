#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num, input;  // ���� ����, �Է� ������ ���� ���� ����
	int i=0, total = 0;  // �ݺ� Ƚ��, �հ迡 ���� ���� ���� �� �ʱ�ȭ
	printf("�� ���� ������ �Է��� ���ΰ���? :");
	scanf("%d", &num);  // ���� ���� �Է�

	while (i < num)  // num��ŭ �ݺ�
	{
		printf("���� �Է� : ");
		scanf("%d", &input);  // ���� �Է�
		total += input;  // �հ迡 �Էµ� ���� ���ϱ�
		i++;  //Ƚ�� �߰�
	}
	printf("����� %f \n", (double)total/num);  //�Ҽ��� ���� �κ��� ���� ����� �� ��ȯ
	return 0;
}