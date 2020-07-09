#include <stdio.h>
#include <string.h>

/*
strlen : 문자열 길이를 알려주는 함수

*/

int main()
{
	char array1[] = "Hello world";
	char array2[] = "안녕하세요";

	printf("strlen(array1) : %d \n", strlen(array1));
	printf("strlen(array2) : %d \n", strlen(array2));

	printf("sizeof(array1) : %d \n", sizeof(array1)); // 종료문자가 포함됨.
	printf("sizeof(array2) : %d \n", sizeof(array2));
}