#include <stdio.h>

int main(void)
{
	int i;
	float num = 0.0;  // �Ǽ� ������ ���� float ���� ����

	for (i = 0; i < 100; i++)  // for �ݺ���
		num += 0.1;  // �� ������ �� 100ȸ ����

	printf("0.1�� 100�� ���� ���: %f \n", num);
	return 0;
}
