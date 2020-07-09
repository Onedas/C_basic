#include <stdio.h>
#include <ctype.h>

/*
toascii : 문자를 ASCII 문자로 변환
tolower : 문자를 소문자로 변환
toupper : 문자를 대문자로 변환
*/

int main()
{
	char a1='A';
	char a2='a';

	printf("아스키 코드 : %d \n", toascii(a1)); //65
	printf("소문자 : %c \n", tolower(a2));
	printf("대문자 : %c \n", toupper(a2));
}