//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//int Fibo(int num)
//{
//	int f1 = 0, f2 = 1, f3, i;
//	if (num == 1)
//		printf("%d ", f1);  // 1 입력 시 0 출력 
//	else
//		printf("%d %d ", f1, f2);  // 그 외의 값 입력 시 우선 0,1 출력
//	
//	for (i = 0; i < num - 2; i++)  // i=num-2 미만 반복
//	{
//		f3 = f1 + f2;  // 세번째 수 계산
//		printf("%d ", f3);
//		f1 = f2;  // 첫번째 수에 두번째 수 할당
//		f2 = f3;  // 두번째 수에 세번째 수 할당
//	}
//	printf("\n");
//}
//
//int main(void)
//{
//	int num;
//	
//	printf("출력하고자 하는 피보나치 수열의 개수: ");
//	scanf("%d", &num);  // 정수 입력
//	if (num < 1)  // 1 미만의 정수 입력 시
//	{
//		printf("1이상의 값 입력");
//		return -1;  // 에러 발생
//	}
//	Fibo(num);  // 함수 호출
//	return 0;
//}