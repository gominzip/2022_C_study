//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main(void)
//{
//	char voca[100];  // ���� 100�� char�� �迭 ����
//	int i, len = 0;  // int�� ���� ���� �� �ʱ�ȭ
//	char max = 0;
//
//	printf("�ܾ� �Է�: ");
//	scanf("%s", voca);  // ���ڿ� �Է� ���� �� voca�� ����
//
//	while (voca[len] != '\0')  // �� ���� �� �ݺ� �ߴ�
//		len++;  // ���� ���
//
//	for (i = 0; i < len; i++)  // ���� ū �ƽ�Ű �ڵ� ���ϱ�
//		if (max < voca[i])
//			max = voca[i];  //  ū ���� max�� ����
//
//	printf("���� ū �ƽ�Ű �ڵ� ���� ����: %c \n", max);  // ���� ���
//	return 0;
//}