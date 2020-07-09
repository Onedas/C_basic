/*
전처리기 지시자

#include : 헤더 파일을 인클루드 하는 기능
#define : 매크로를 정의하는 기능
#undef : 이미 정의된 매크로를 해제하는 기능
#if, #elif, #else, #endif : 조건에 따라 컴파일 하는 기능
#ifdef : 매크로가 정의된 경우 컴파일 하는 기능
#ifndef : 매크로가 정의되지 않은 경우에 컴파일 하는 기능

*/
#include <stdio.h>

#define ADD(x,y) ((x)+(y))
#define MUL(x,y) ((x)*(y))

#ifndef DIV
	#define DIV(x,y) ((x)/(y))
#endif

int main()
{
	double num1=3.3, num2=1.1;
	double result =0.0;

	#ifdef ADD // 매크로 ADD가 있는경우에만 컴파일 실행
		result = ADD(num1,num2);
		printf("ADD 결과 : %lf\n", result);
	#endif

	#ifdef MUL
		result = MUL(num1, num2);
		printf("MUL 결과 : %lf\n", result);
	#endif

	#ifndef DIV //매크로 DIV가 없는 경우에만.
		printf("DIV는 정의 되어 있지 않음 \n");
	#endif
}