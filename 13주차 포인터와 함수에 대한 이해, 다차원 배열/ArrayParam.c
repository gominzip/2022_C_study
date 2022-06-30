//#include <stdio.h>
//
//void ShowArayElem(int* param, int len)  // 전달받은 인자의 주소 값과 인자의 길이정보를 매개변수에 복사
//{
//	int i;  // int형 변수 선언
//	for (i = 0; i < len; i++)  // 배열의 길이만큼 반복
//		printf("%d ", param[i]);  // 배열요소에 저장된 값 출력
//	printf("\n");
//}
//
//int main(void)
//{
//	int arr1[3] = { 1,2,3 };  // 길이 3 int형 배열 선언 및 초기화
//	int arr2[5] = { 4,5,6,7,8 };  // 길이 5 int형 배열 선언 및 초기화
//	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));  // 함수호출 및 인자전달
//	ShowArayElem(arr2, sizeof(arr2) / sizeof(int));
//	return 0;
//}