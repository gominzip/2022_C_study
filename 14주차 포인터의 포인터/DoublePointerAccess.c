//#include <stdio.h>
//
//int main(void)
//{
//	double num = 3.14;  // double형 변수 선언 및 초기화
//	double* ptr = &num;  // 변수 num의 주소 값 저장
//	double** dptr = &ptr;  // 이중 포인터 dptr 선언
//	double* ptr2;  // double형 포인터 ptr2 선언
//
//	printf("%17p %17p \n", ptr, *dptr);  // ptr=*dptr
//	printf("%17g %17g \n", num, **dptr);  // num=**dptr
//	ptr2 = *dptr;  // ptr2=ptr
//	*ptr2 = 10.99;  // *ptr2=*ptr=num=10.99 으로 변경
//	printf("%17g %17g \n", num, **dptr);  // 변경된 num값 확인
//	return 0;
//}