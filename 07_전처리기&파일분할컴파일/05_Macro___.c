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

/*
__FILE__ : 소스코드의 파일 이름			%s
__LINE__ : 현재 위치의 소스 코드 행 번호 	%d
__DATE__ : 컴파일 날짜 					%s
__TIME__ : 컴파일 시간	 				%s
*/

int main()
{
	printf("파일 이름\t: %s \n", __FILE__);
	printf("행 번호  \t: %d \n",__LINE__);
	printf("컴파일 날짜\t: %s \n",__DATE__);
	printf("컴파일 시간\t: %s \n",__TIME__);
}