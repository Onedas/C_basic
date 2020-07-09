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

#define CODE 3

int main()
{
	double num1 = 3.3, num2 = 1.1;
	double result =0.0;

	#if(CODE==1)
		printf("CODE 1 실행\n");

	#elif(CODE==2)
		printf("CODE 2 실행\n");

	#elif(CODE==3)
		printf("CODE 3 실행\n");
		
	#else
		printf("프로그램 종료\n");

	#endif
}