//#include <stdio.h>
//
//int main(void)
//{
//	int a, z, result;  // int형 변수 선언
//
//	for (a = 0; a < 10; a++)  // a 초기화, 9까지 반복, 1씩 증가
//	{
//		for (z = 0; z < 10; z++)  // z 초기화, 9까지 반복, 1씩 증가
//		{
//			if (a == z)  // a와 z가 같을 시에는 99가 될 수 없음
//				continue;  // 9행의 조건검사로 이동
//			result = (10 * a + z) + (10 * z + a);  // 결과값 계산
//			if (result == 99)  // 결과값이 99일 시
//				printf("%d%d + %d%d = %d \n", a, z, z, a, result);  // 계산식 출력
//		}
//	}
//	return 0;
//}