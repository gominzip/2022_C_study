//#include <stdio.h>
//
//int main(void)
//{
//	int i, j;  // int형 변수 선언
//
//	for (i = 1; i<10; i++)  // 1단부터 9단까지 반복
//	{
//		if (i % 2 != 0)  // 짝수 단이 아닐 시 실행
//			continue;  // 7행의 조건검사문으로 돌아감
//		for (j = 1; j < 10; j++)  // 짝수 단일 시 실행
//		{
//			if (i < j)  // 곱해지는 수가 단의 수보다 커지면
//				break;  // 11행 조건문 탈출
//			printf("%d x %d = %d \n", i, j, i * j);  // 단 출력
//		}
//		printf("\n");
//	}
//	return 0;
//}