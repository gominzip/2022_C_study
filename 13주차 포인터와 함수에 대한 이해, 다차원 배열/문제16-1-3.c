#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int score[5][5];  // 세로5 가로5인 int형 2차원 배열 선언

/* 성적 입력 함수 */
void WriteScore(void)
{
	int i, j, total;  // int형 변수 선언

	for (i = 0; i < 4; i++)  // 성적입력 반복문, 배열 score 4행까지 초기화
	{
		total = 0;  // 성적 합계 변수, 행이 새로 시작하면 0으로 변경
		printf("%d번 학생의 성적 입력: \n", i + 1);
		for (j = 0; j < 4; j++)  // 배열 score 4열까지 초기화
		{
			printf("과목 %d: ", j + 1);
			scanf("%d", &score[i][j]); // i+1번째 학생의 j+1번째 과목 성적 입력
			total += score[i][j];  // 학생 성적 총합 구하기
		}
		score[i][4] = total;  // 모든 총점 부분에 학생총점 합
	}
}

/* 과목별 성적 합계 */
void WriteSubTotal(void)
{
	int i, j, total;  // int형 변수 선언

	for (i = 0; i < 4; i++)  // 열의 반복
	{
		total = 0;  // 성적 합계 변수, 열이 새로 시작하면 0으로 변경
		for (j = 0; j < 4; j++)  // 행의 반복
			total += score[j][i];  // i+1 열의 모든 행의 합
		score[4][i] = total;  // 열의 마지막(과목 총점 부분) 초기화
		score[4][4] += total;  // 모든 총점 부분에 과목총점 합
	}
}

/* 배열에 저장된 값 출력 */
void ShowAllRecord(void)
{
	int i, j;
	for (i = 0; i < 5; i++)  // 행 5번 반복
	{
		for (j = 0; j < 5; j++)  // 열 5번 반복
			printf("%3d ", score[i][j]);  // 배열요소 출력, 필드 폭 3 및 오른쪽 정렬
		printf("\n");
	}
}

int main(void)
{
	WriteScore();  // 성적 입력 및 학생 별 총점 계산
	WriteSubTotal();  // 과목 별 총점 계산
	ShowAllRecord();  // 전체 배열요소 출력
	return 0;
}