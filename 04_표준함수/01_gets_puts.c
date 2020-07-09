#include <stdio.h>
/*
입력함수 gets() 실패시 NULL 포인터 반환
출력함수 puts() 실패시 EOF 반환
*/

/*input
안녕하세요.\n

*/

int main()
{
	char array1[10];
	char array2[20] = "Good luck";

	puts("문자열을 입력하세요."); //자동으로 \n(개행)
	gets(array1);
	puts(array1);

	puts(array2);
	puts("puts test 입니다");
}