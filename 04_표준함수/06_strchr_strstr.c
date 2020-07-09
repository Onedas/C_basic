#include <stdio.h>
#include <string.h>
/*
strchr(array1, s) : array1에서 문자 s의 메모리 주소를 반환
strstr(array1, array2) : array1에서 array2 메모리 주소를 반환

*/

int main()
{
	char array1[50] = "Good-morning, Good-afternoon, Good-evening";
	char array2[10] = "morning";

	char* p1=NULL;
	char* p2=NULL;

	p1 = strchr(array1,'a');
	p2 = strstr(array1, array2);

	printf("문자 a의 위치 : %x \n", p1);
	printf("문자열 : %s \n", p1);
	printf("---------------------------------\n");
	printf("문자열의 시작 위치 : %x \n", p2);
	printf("문자열 : %s \n", p2);
}