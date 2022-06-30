//#include <stdio.h>
//
//int main(void)
//{
//	int cur = 2;  //5~6행 변수 선언 및 초기화
//	int is = 0;
//
//	do
//	{
//		is = 1;  // 새로운 단의 시작을 위해서 1 할당
//		do  // 각 단의 1부터 9의 곱을 표현
//		{
//			printf("%d x %d = %d \n", cur, is, cur * is);
//			is++;  // is=is+1
//		}while (is < 10); // n단 완료
//		cur++;  // cur=cur+1
//	} while (cur <= 9);  //cur이 9 초과면 중단
//	return 0;
//}