#include <stdio.h>
#include <string.h>

/*
strcpy(A,B) : B 문자열을  A에 복사
strncpy(A,B,n) : B문자열을 A에 n바이트 만큼 복사

*/

int main()
{
	char array1[12] = "Hello world";
	char array2[12];
	char array3[12];
	char array4[12];

	strcpy(array2, array1);
	strncpy(array3, array1, 12);// 12 = strlen(array1)+1 = sizeof(array1)
	strncpy(array4, array1, 5);

	puts(array2);
	puts(array3);
	puts(array4);
}