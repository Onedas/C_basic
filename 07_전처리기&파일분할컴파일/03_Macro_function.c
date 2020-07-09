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

#define MUL(x,y) x*y //매크로 함수 정의
#define MUL2(x,y) ((x)*(y))
int main()
{
	int a, b;
	double c, d;

	a=5;
	b=7;
	printf("%d * %d = %d \n", a, b, MUL(a,b));

	c=5.5;
	d=6.6;
	printf("%lf * %lf = %lf \n", c, d, MUL(c,d));

	// 매크로 함수 주의
	int result1, result2;
	result1 = MUL(1+1, 1+1); //		1+1*1+1 = 3 이므로... 매크로 함수는 단순 치환형식!
	printf("%d \n",result1); //	 -> 1+(1*1)+1 = 3

	result2 = MUL2(1+1, 1+1); // =4
	printf("%d \n", result2);

}