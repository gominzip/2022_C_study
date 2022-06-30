//#include <stdio.h>
//
//int main(void)
//{
//	int arr[6] = { 1,2,3,4,5,6 };  // 길이 6, int형 배열요소 선언
//	int* front = &arr[0];  // 첫 번째 배열요소 주소를 가리키는 포인터 변수 선언
//	int* back = &arr[5];  // 마지막 배열요소 주소를 가리키는 포인터 변수 선언
//	int i, temp;  // int형 변수 선언
//
//	for (i = 0; i < 3; i++)  // 3반복, 배열의 절반 반복
//	{
//		temp = *front;  // 앞의 배열요소 temp에 저장
//		*front = *back;  // front에 뒤의 배열요소 저장
//		*back = temp;  // 뒤의 배열요소 temp에 저장
//		front += 1;  // 다음 배열요소의 주소 값으로
//		back -= 1;  // 이전 배열요소의 주소 값으로
//	}
//
//	for (i = 0; i < 6; i++)
//		printf("%d", arr[i]);  // 배열요소 출력
//	
//	printf("\n");
//	return 0;
//}