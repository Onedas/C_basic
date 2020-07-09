#include <stdio.h>
#include <ctype.h>

/*

int isalnum(int c); 알파벳인지 숫자인지
int isalpha(int c); 알파벳인지 아닌지
int isdigit(int c); 숫자인지 아닌지
int islower(int c); 소문자인지 아닌지
int isupper(int c); 대문자인지 아닌지
int isspace(int c); 공백 문자인지 아닌지
int isxdigit(int c); 16진수인지 아닌지

*/

int main()
{
	char a1='A', a2='a', a3='B';
	int result1, result2, result3;

	result1 = isalnum(a1);
	result2 = isupper(a2);
	result3 = islower(a3);

	printf("%d %d %d \n",result1, result2, result3);
}	