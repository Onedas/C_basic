/*
5
전처리기 지시자
#include : 헤더 파일을 인클루드 하는 기능
#define : 매크로를 정의하는 기능
#undef : 이미 정의된 매크로를 해제하는 기능
#if, #elif, #else, #endif : 조건에 따라 컴파일 하는 기능
#ifdef : 매크로가 정의된 경우 컴파일 하는 기능
#ifndef : 매크로가 정의되지 않은 경우에 컴파일 하는 기능
*/

#include <stdio.h>

#define PI 3.14 // 실수형 매크로

// 그밖에...
#define MAX 100 // 정수형 매크로 
#define STRING "Hello C" // 문자열 매크로
#define OUTPUT printf // 함수 이름 매크로
#define DATA int //자료형 매크로

//
int main()
{
	double area, circum, radius;

	
	radius = 5;

	area = PI * radius * radius;
	circum = 2 * PI * radius;

	printf("반지름 : %lf \n", radius);
	printf("원의 넓이 : %lf \n", area);
	printf("원의 둘레 : %lf \n\n", circum);

	#undef PI // 매크로 해제

	#define PI 3.141592 //매크로 재정의

	circum = 2* PI * radius;
	printf("원의 둘레 : %lf \n", circum);
}