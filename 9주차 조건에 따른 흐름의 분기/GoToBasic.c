#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num;  // int�� ���� ����
	printf("�ڿ��� �Է�: ");
	scanf("%d", &num);  // ���� �Է�

	if (num == 1)  // 1�� ��
		goto ONE;  // ���̺� ONE�� ��ġ�� �̵�
	else if (num == 2)  //2�� ��
		goto TWO;  // ���̺� TWO�� ��ġ�� �̵�
	else  // �� ��
		goto OTHER;  // ���̺� OTHER�� ��ġ�� �̵�

ONE:  // ���̺� ONE
	printf("1�� �Է��ϼ̽��ϴ�! \n");
	goto END;  // ���̺� END�� ��ġ�� �̵�
TWO:  // ���̺� TWO
	printf("2�� �Է��ϼ̽��ϴ�! \n");
	goto END;  // ���̺� END�� ��ġ�� �̵�
OTHER:  // ���̺� OTHER
	printf("3 Ȥ�� �ٸ� ���� �Է��ϼ̱���! \n");

END:  // ���̺� END
	return 0;  // 0 ��ȯ ����
}