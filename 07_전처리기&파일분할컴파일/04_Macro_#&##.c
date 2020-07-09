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

// # : 문자열 로 변환
#define OUTPUT1(a) 		a
#define OUTPUT2(a) 		#a // #a : a를 문자열로 바꾸어줌
#define OUTPUT3(a,b) 	a+b
#define OUTPUT4(a,b) 	#a "+" #b

// ## : 토큰 결합 연산자
#define OUTPUT5(a,b) 	a ## b
#define INT_i(n) 		int i##n = n
#define printf_i(n)		printf("i%d = %d\n", n, i##n)

int main()
{
	// #
	printf("%d \n",OUTPUT1(1234));
	printf("%s \n",OUTPUT2(1234));
	printf("%d \n",OUTPUT3(11,22));
	printf("%s \n",OUTPUT4(11,22));
	printf("\n");
	// ##
	printf("%d \n",OUTPUT5(12,34));

	for (int i=0; i<5; i++)
	{
		INT_i(i); 	// int i0 = 0;
					// int i1 = 1; ....
		printf_i(i);
	}

}