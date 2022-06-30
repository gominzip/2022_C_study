#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int arr[10];  // 길이10 int형 배열 선언
	int i, n;  // int형 변수 선언
	int a = 0, b = 0;  // 배열위치 선정을 위한 변수

	printf("총 10개의 숫자 입력 \n");
	for (i = 0; i < 10; i++)  // 10번 반복
	{
		printf("입력: ");
		scanf("%d", &n);  // 정수 입력 및 n에 저장
		if (n % 2 != 0){  // n이 홀수면
			arr[a] = n;  // arr의 앞부분에 저장
			a++;  // a 1증가
		}
		else{  // n이 짝수면
			arr[9 - b] = n;  // arr의 뒷부분에 저장
			b++;  // b 1증가
		}
	}

	printf("배열 요소의 출력 : ");
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);  // arr 배열요소 값 출력
	printf("\n");
	return 0;
}