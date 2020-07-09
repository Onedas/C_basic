#include <stdio.h>
#include <string.h>

/*
strcat(array1, array2) : array1과 array2 문자열을 결합
strncat(array1, array2, n) : array1에 array2 문자열을 n바이트 만큼 결합
*/

int main()
{
	char array1[] = "What time is it?";
	char array2[] = "It is three";

	strcat(array1, array2);
	puts(array1);

	strncat(array1, array2, 6);
	puts(array1);
}