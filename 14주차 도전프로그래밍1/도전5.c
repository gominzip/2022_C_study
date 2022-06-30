//#include <stdio.h>
//
//int main(void)
//{
//	int i, j;
//	int cnt = 0;
//
//	for (i = 2; cnt < 10; i++)  // cnt=10되면 반복문 끝
//	{
//		for (j = 2; j <= i; j++) 
//		{
//			if (i % j == 0 && j != i)  // i가 아닌 j로 i가 나눠떨어지면 소수가 아님
//				break;  // 10행 반복문 탈출 후 i 1증가
//
//			else if (i == j)  // i가 i=j로만 나눠떨어지면 소수
//			{
//				printf("%d ", i);  // 소수 i 출력
//				cnt += 1;  // 카운트 증가
//			}
//
//			else  // 그 외의 경우
//				continue;  // 12행으로 이동
//		}
//	}
//	printf("\n");
//	return 0;
//}