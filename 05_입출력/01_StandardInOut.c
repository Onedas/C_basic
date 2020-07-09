#include <stdio.h>
/*
int getchar(void) : 키보드로 부터 한 문자를 입력 받음
int putchar(int c) : 모니터에 한 문자를 출력
char* gets(char* s) : 키보드로부터 문자열을 입력받음
int puts(char* str) : 모니터에 문자열을 출력
int scanf(const char* format, ...) : 키보드로부터 데이터를 서식에 맞추어 입력
int printf(const char* format, ...) : 모니터에 데이터를 서식에 맞추어 출력
*/

/*inputs
a
b
c
d

*/

int main()
{
	char ch=0;

	while (ch != EOF)
	{
		ch = getchar();
		putchar(ch);
	}
}