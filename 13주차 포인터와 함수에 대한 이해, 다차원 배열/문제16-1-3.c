#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int score[5][5];  // ����5 ����5�� int�� 2���� �迭 ����

/* ���� �Է� �Լ� */
void WriteScore(void)
{
	int i, j, total;  // int�� ���� ����

	for (i = 0; i < 4; i++)  // �����Է� �ݺ���, �迭 score 4����� �ʱ�ȭ
	{
		total = 0;  // ���� �հ� ����, ���� ���� �����ϸ� 0���� ����
		printf("%d�� �л��� ���� �Է�: \n", i + 1);
		for (j = 0; j < 4; j++)  // �迭 score 4������ �ʱ�ȭ
		{
			printf("���� %d: ", j + 1);
			scanf("%d", &score[i][j]); // i+1��° �л��� j+1��° ���� ���� �Է�
			total += score[i][j];  // �л� ���� ���� ���ϱ�
		}
		score[i][4] = total;  // ��� ���� �κп� �л����� ��
	}
}

/* ���� ���� �հ� */
void WriteSubTotal(void)
{
	int i, j, total;  // int�� ���� ����

	for (i = 0; i < 4; i++)  // ���� �ݺ�
	{
		total = 0;  // ���� �հ� ����, ���� ���� �����ϸ� 0���� ����
		for (j = 0; j < 4; j++)  // ���� �ݺ�
			total += score[j][i];  // i+1 ���� ��� ���� ��
		score[4][i] = total;  // ���� ������(���� ���� �κ�) �ʱ�ȭ
		score[4][4] += total;  // ��� ���� �κп� �������� ��
	}
}

/* �迭�� ����� �� ��� */
void ShowAllRecord(void)
{
	int i, j;
	for (i = 0; i < 5; i++)  // �� 5�� �ݺ�
	{
		for (j = 0; j < 5; j++)  // �� 5�� �ݺ�
			printf("%3d ", score[i][j]);  // �迭��� ���, �ʵ� �� 3 �� ������ ����
		printf("\n");
	}
}

int main(void)
{
	WriteScore();  // ���� �Է� �� �л� �� ���� ���
	WriteSubTotal();  // ���� �� ���� ���
	ShowAllRecord();  // ��ü �迭��� ���
	return 0;
}