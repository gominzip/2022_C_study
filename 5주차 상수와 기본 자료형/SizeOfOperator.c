#include <stdio.h>

int main(void)
{
	char ch = 9;  // char 자료형으로 변수 선언 및 초기화
	int inum = 1052;  // int 자료형으로 변수 선언 및 초기화
	double dnum = 3.1415;  // double 자료형으로 변수 선언 및 초기화
	printf("변수 ch의 크기: %d \n", sizeof(ch));  // 8~10행 sizeof 연산자를 통해 변수의 크기 확인
	printf("변수 inum의 크기: %d \n", sizeof(inum));
	printf("변수 dnum의 크기: %d \n", sizeof(dnum));

	printf("char의 크기: %d \n", sizeof(char));  // 12~17행 sizeof 연산자를 통해 자료형의 크기 확인
	printf("int의 크기: %d \n", sizeof(int));
	printf("long의 크기: %d \n", sizeof(long));
	printf("long long의 크기: %d \n", sizeof(long long));
	printf("float의 크기: %d \n", sizeof(float));
	printf("double의 크기: %d \n", sizeof(double));
	return 0;
}