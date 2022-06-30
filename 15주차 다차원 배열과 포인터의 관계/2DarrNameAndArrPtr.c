//#include <stdio.h>
//
//int main(void)
//{
//	int arr1[2][2] = {  // 세로2 가로2 int형 2차원 배열 선언
//		{1, 2}, {3, 4}
//	};
//	int arr2[3][2] = {  // 세로3 가로2 int형 2차원 배열 선언
//		{1, 2}, {3, 4}, {5, 6}
//	};
//	int arr3[4][2] = {  // 세로4 가로2 int형 2차원 배열 선언
//		{1, 2}, {3, 4}, {5, 6}, {7, 8}
//	};
//
//	int(*ptr)[2];  // int형 sizeof(int)*2의 크기단위로 값이 증감하는 배열 포인터 변수 선언
//	int i;  // int형 변수 선언
//
//	ptr = arr1;  // arr1 배열의 이름으로 포인터 ptr에 주소값 저장
//	printf("** Show 2,2 arr1 **\n");  // arr1 전체 출력
//	for (i = 0; i < 2; i++)  // 세로의 길이 2만큼 반복
//		printf("%d %d \n", ptr[i][0], ptr[i][1]);  // 각 행의 값 출력
//
//	ptr = arr2;  // arr2 배열의 이름으로 포인터 ptr에 주소값 저장
//	printf("** Show 3,2 arr1 **\n");  // arr2 전체 출력
//	for (i = 0; i < 3; i++)  // 세로의 길이 3만큼 반복
//		printf("%d %d \n", ptr[i][0], ptr[i][1]);  // 각 행의 값 출력
//
//	ptr = arr3;  // arr3 배열의 이름으로 포인터 ptr에 주소값 저장
//	printf("** Show 4,2 arr1 **\n");  // arr3 전체 출력
//	for (i = 0; i < 4; i++)  // 세로의 길이 4만큼 반복
//		printf("%d %d \n", ptr[i][0], ptr[i][1]);  // 각 행의 값 출력
//	return 0;
//}