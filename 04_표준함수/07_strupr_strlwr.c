#include <stdio.h>
#include <string.h>
/*
strupr : 문자열을 대문자로 바꾸는 함수
strlwr : 문자열을 소문자로 바꾸는 함수

*/

int main()
{
	char array1[50] = "Good-morning, good-afternoon, good-evening";
	char* p1 = NULL;
	
	p1 = strupr(array1);
	puts(p1);

	p1 = strlwr(array1);
	puts(p1);

}