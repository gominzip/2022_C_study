#include <stdio.h>

int main(void)
{
	int arr2d[3][3];  // 세로3 가로3 int형 2차원 배열 선언
	printf("%d \n", arr2d);  // 첫 번째 요소 주소값 출력
	printf("%d \n", arr2d[0]);  // 1행의 첫 번째 배열요소 주소값 출력
	printf("%d \n\n", &arr2d[0][0]);  // arr2d[0][0]의 주소값 출력

	printf("%d \n", arr2d[1]);  // 2행의 첫 번째 배열요소 주소값 출력
	printf("%d \n\n", &arr2d[1][0]);  // arr2d[1][0]의 주소값 출력

	printf("%d \n", arr2d[2]);  // 3행의 첫 번째 배열요소 주소값 출력
	printf("%d \n\n", &arr2d[2][0]);  // arr2d[2][0]의 주소값 출력

	printf("sizeof(arr2d): %d \n", sizeof(arr2d));  // 배열전체의 크기 반환
	printf("sizeof(arr2d[0]): %d \n", sizeof(arr2d[0]));  // 1행의 크기 반환
	printf("sizeof(arr2d[1]): %d \n", sizeof(arr2d[1]));  // 2행의 크기 반환
	printf("sizeof(arr2d[2]): %d \n", sizeof(arr2d[2]));  // 3행의 크기 반환
	return 0;
}