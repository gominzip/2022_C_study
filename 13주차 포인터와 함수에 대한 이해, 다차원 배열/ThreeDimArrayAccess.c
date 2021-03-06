#include <stdio.h>

int main(void)
{
	int mean = 0, i, j;  // int형 변수 선언
	int record[3][3][2] = {  // 높이3 세로3 가로2의 int형 3차원 배열 선언 및 초기화
		{
			{70, 80},  // A 학급 학생 1의 성적
			{94, 90},  // A 학급 학생 2의 성적
			{70, 85}   // A 학급 학생 3의 성적
		},
		{
			{83, 90},  // B 학급 학생 1의 성적
			{95, 60},  // B 학급 학생 2의 성적
			{90, 82}   // B 학급 학생 3의 성적
		},
		{
			{98, 89},  // C 학급 학생 1의 성적
			{99, 94},  // C 학급 학생 2의 성적
			{91, 87}   // C 학급 학생 3의 성적
		} 
	};

	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[0][i][j];  // 0번째 2차원 배열에 접근, A학급 총점 계산
	printf("A 학급 전체 평균: %g \n", (double)mean / 6);  // double 형 변환 연산자, 총점 / 성적 개수 = A학급 평균

	mean = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[1][i][j];  // 1번째 2차원 배열에 접근, B학급 총점 계산
	printf("B 학급 전체 평균: %g \n", (double)mean / 6);  // double 형 변환 연산자, 총점 / 성적 개수 = B학급 평균

	mean = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[2][i][j];  // 2번째 2차원 배열에 접근, C학급 총점 계산
	printf("C 학급 전체 평균: %g \n", (double)mean / 6);  // double 형 변환 연산자, 총점 / 성적 개수 = C학급 평균
	return 0;
}