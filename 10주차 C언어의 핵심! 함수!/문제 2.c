//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int AddToTotal(int num)
//{	static int total = 0;  // 1회 초기화, 이후 초기화 x
//	total += num;  // total=total+num
//	return total;  // total 반환
//}
//
//int main(void)
//{
//	int num, i;  // int형 변수 선언
//	for (i = 0; i < 3; i++)  // i 초기화, 3반복, 후위증가
//	{
//		printf("입력%d: ", i + 1);  
//		scanf("%d", &num);  // 정수 입력
//		printf("누적: %d \n", AddToTotal(num));  // 함수 호출
//	}
//	return 0;
//}
