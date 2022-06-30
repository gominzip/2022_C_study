//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 10, num2 = 20, num3 = 30, num4 = 40;  // int형 변수 선언 및 초기화
//	int arr2d[2][4] = { 1,2,3,4,5,6,7,8 };  // 세로2 가로4 int형 배열arr2d 선언
//	int i, j;
//
//	int* whoA[4] = { &num1, &num2,&num3,&num4 };  // int형 포인터 배열 선언
//	int(*whoB)[4] = arr2d;  // 가로길이가 4인 int형 2차원 배열을 가리키는 배열 포인터 선언
//
//	printf("%d %d %d %d \n", *whoA[0], *whoA[1], *whoA[2], *whoA[3]);  // 포인터 배열 속 주소가 가리키는 배열요소의 값 출력
//	for (i = 0; i < 2; i++)  // 세로2번 반복
//	{
//		for (j = 0; j < 4; j++)  // 가로4번 반복
//			printf("%d ", whoB[i][j]);  // arr2d의 배열요소 전체 출력
//		printf("\n");
//	}
//	return 0;
//}