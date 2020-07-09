#include <stdio.h>
#include <string.h>

/*

sscanf : 메모리로부터 문자열을 입력 받음
sprintf : 메모리에 문자열을 출력

*/

int main()
{
	char array[50] = "100  3.14  good-morning";
	char array2[50];
	int num1;
	double num2;
	char str[50];

	//scanf(%d %lf %s", &num1, &num2, str); //키보드로부터 입력받음
	sscanf(array, "%d %lf %s", &num1, &num2, str);

	printf("출력\n");
	printf("%d %lf %s \n",num1, num2, str);

	sprintf(array2, "%d %lf %s \n", num1, num2, str);
	printf("%s \n", array2);

}