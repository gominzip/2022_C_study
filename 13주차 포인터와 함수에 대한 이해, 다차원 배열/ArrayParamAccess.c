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
//void AddArayElement(int* param, int len, int add)  // 3개의 인자를 매개변수에 복사
//{
//	int i;
//	for (i = 0; i < len; i++)
//		param[i] += add;  // i번째 배열에 저장된 값에 add 값을 더해 값을 변경
//}
//
//int main(void)
//{
//	int arr[3] = { 1,2,3 };  // 길이 3 int형 배열 선언 및 초기화
//	AddArayElement(arr, sizeof(arr) / sizeof(int), 1);  // 배열요소에 정수를 더하는 AddArayElement 함수호출 및 인자전달
//	ShowArayElem(arr, sizeof(arr) / sizeof(int));  // 배열요소를 출력하는 ShowArayElem 함수호출
//
//
//	AddArayElement(arr, sizeof(arr) / sizeof(int), 2);  // 2 더하기
//	ShowArayElem(arr, sizeof(arr) / sizeof(int));
//
//	AddArayElement(arr, sizeof(arr) / sizeof(int), 3);  // 3 더하기
//	ShowArayElem(arr, sizeof(arr) / sizeof(int));
//	return 0;
//}