#include <stdio.h>

int main(void)
{
	int cnt;  // int�� ���� ����
	for (cnt = 0; cnt < 3; cnt++)  // cnt �ʱ�ȭ, 3�̸� �ݺ�, ��������
	{
		int num = 0;  // int�� ���� ���� �� �ʱ�ȭ
		num++;  // ��������
		printf("%d��° �ݺ�, �������� num�� %d. \n", cnt + 1, num);  // num ���
	}  // �߰�ȣ�� Ż�� �� ���� �ݺ�, Ż�� �� �������� �Ҹ�

	if (cnt == 3)  // cnt�� 3�̶��
	{
		int num = 7;  // num ���� �� �ʱ�ȭ
		num++;  // ��������
		printf("if�� ���� �����ϴ� �������� num�� %d. \n", num);  // num ���
	}  // �߰�ȣ Ż�� �� �������� �Ҹ�
	return 0;
}