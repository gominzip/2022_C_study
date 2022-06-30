//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main(void)
//{
//	int villa[4][2];  // 세로 4= 4층, 가로 2 = 층별로 2 가구
//	int popu, i, j;
//
//	/* 가구별 거주인원 입력 받기 */
//	for (i = 0; i < 4; i++)  // 4번 반복을 통해 1층부터 4층까지 기록
//	{
//		for (j = 0; j < 2; j++)  // 2번 반복을 통해 층의 두 가구 모두 기록
//		{
//			printf("%d층 %d호 인구수: ", i + 1, j + 1);
//			scanf("%d", &villa[i][j]);  // 각 가구 인구수 입력
//		}
//	}
//
//	/* 빌라의 층별 인구수 출력하기 */
//	for (i = 0; i < 4; i++)  // 4번 반복을 통해 1층부터 4층까지 기록
//	{
//		popu = 0;  // 인구수 0으로 할당
//		popu += villa[i][0]; // i+1층의 첫번째 가구 인구수 더하기
//		popu += villa[i][1]; // i+1층의 두번째 가구 인구수 더하기
//		printf("%d층 인구수: %d \n", i + 1, popu);  // i+1층의 총 인구수 출력
//	}
//	return 0;
//}