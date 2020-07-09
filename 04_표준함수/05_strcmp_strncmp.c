#include <stdio.h>
#include <string.h>
/*
strcmp(array1, array2) : array1 과 array2를 비교 하여 결과 반환
strcmp(array1, array2, n) : array1과 array2를 n개 까지 비교 결과 반환

array1 >array2 => 1
array1==array2 => 0
array1 <array2 => -1

*/
int main()
{
	char array1[20] = "Good-morning";
	char array2[20] = "Good-afternoon";
	char array3[20] = "Good-evening";

	int result1, result2, result3;

	result1 = strcmp(array1, array2);
	result2 = strncmp(array1, array2, 5); //Good- 까지는 같음.
	result3 = strcmp(array2, array3);

	printf("%d %d %d \n", result1, result2, result3);
}