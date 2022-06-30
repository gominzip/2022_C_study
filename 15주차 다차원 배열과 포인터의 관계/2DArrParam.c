#include <stdio.h>
// 배열요소 전체출력 함수
void ShowArr2DStyle(int(*arr)[4], int column)  // 배열포인터 매개변수 arr, int형 매개변수 column 선언
{
	int i, j;  // int형 변수 선언
	for (i = 0; i < column; i++)  // 전달받은 세로 길이 만큼 반복
	{
		for (j = 0; j < 4; j++)  // 가로 길이 4만큼 반복
			printf("%d ", arr[i][j]);  // 배열포인터 arr이 가리키는 배열의 배열요소 전체 출력
		printf("\n");
	}
	printf("\n");
}
// 배열요소의 합 반환 함수
int Sum2DArr(int arr[][4], int column)  // 배열포인터 매개변수 arr, int형 매개변수 column 선언
{
	int i, j, sum = 0;  // int형 변수 선언
	for (i = 0; i < column; i++)  // 전달받은 세로 길이 만큼 반복
		for (j = 0; j < 4; j++)  // 가로 길이 4만큼 반복
			sum += arr[i][j];  // arr이 가리키는 배열의 배열요소 값 합
	return sum;  // 배열요소의 합 반환
}

int main(void)
{
	int arr1[2][4] = { 1,2,3,4,5,6,7,8 };  // 세로2 가로4 int형 2차원 배열 선언
	int arr2[3][4] = { 1,1,1,1,3,3,3,3,5,5,5,5 };  // 세로3 가로4 int형 2차원 배열 선언

	ShowArr2DStyle(arr1, sizeof(arr1) / sizeof(arr1[0]));  // 함수호출, 배열이름 arr1, arr1의 세로 길이 전달
	ShowArr2DStyle(arr2, sizeof(arr2) / sizeof(arr2[0]));  // 함수호출, 배열이름 arr2, arr2의 세로 길이 전달
	printf("arr1의 합: %d \n", Sum2DArr(arr1, sizeof(arr1) / sizeof(arr1[0])));  // 함수호출, arr1 배열요소의 합 출력
	printf("arr1의 합: %d \n", Sum2DArr(arr2, sizeof(arr2) / sizeof(arr2[0])));  // 함수호출, arr2 배열요소의 합 출력
	return 0;
}