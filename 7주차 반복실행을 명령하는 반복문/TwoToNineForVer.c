#include <stdio.h>

int main(void)
{
	int cur, is;  // int�� ���� ����

	for (cur = 2; cur < 10; cur++)  // cur �ʱ�ȭ, 2���� 10�̸����� �ݺ�, 1�� ����
	{
		for (is = 1; is < 10; is++)  // is �ʱ�ȭ, 1���� 10�̸����� �ݺ�, 1�� ����
			printf("%d x %d = %d \n", cur, is, cur * is);  // �� ���
		printf("\n");  //�� ��
	}
	return 0;
}