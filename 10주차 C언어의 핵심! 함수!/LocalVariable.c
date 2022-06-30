//#include <stdio.h>
//
//int SimpleFuncOne(void)  // 인자x
//{
//	int num = 10;  // 지역변수, 이후부터 SimpleFuncOne의 num 유효
//	num++;  // 후위증가
//	printf("SimpleFuncOne num: %d \n", num);
//	return 0;  // SimpleFuncOne의 num이 유효한 마지막 문장
//}
//
//int SimpleFuncTwo(void)  // 인자x
//{
//	int num1 = 20;  // 지역변수, 이후부터 num1 유효
//	int num2 = 30;  // 지역변수, 이후부터 num2 유효
//	num1++, num2--;  // 후위증가, 후위감소
//	printf("num1 & num2: %d %d \n", num1, num2);
//	return 0;  // num1, num2 유효한 마지막 문장
//}
//
//int main(void)
//{
//	int num = 17;  // 이후부터 main의 num 유효
//	SimpleFuncOne();  // 함수 호출
//	SimpleFuncTwo();  // 함수 호출
//	printf("main num: %d \n", num);  // num 출력
//	return 0;  // main의 num이 유효한 마지막 문장
//} 