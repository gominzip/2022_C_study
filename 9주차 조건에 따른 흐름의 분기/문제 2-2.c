//#include <stdio.h>
//
//int main(void)
//{
//	int a, z, result;  // int�� ���� ����
//
//	for (a = 0; a < 10; a++)  // a �ʱ�ȭ, 9���� �ݺ�, 1�� ����
//	{
//		for (z = 0; z < 10; z++)  // z �ʱ�ȭ, 9���� �ݺ�, 1�� ����
//		{
//			if (a == z)  // a�� z�� ���� �ÿ��� 99�� �� �� ����
//				continue;  // 9���� ���ǰ˻�� �̵�
//			result = (10 * a + z) + (10 * z + a);  // ����� ���
//			if (result == 99)  // ������� 99�� ��
//				printf("%d%d + %d%d = %d \n", a, z, z, a, result);  // ���� ���
//		}
//	}
//	return 0;
//}