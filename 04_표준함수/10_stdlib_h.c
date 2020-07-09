#include <stdio.h>
#include <stdlib.h>

/*
atof : 문자열을 double형으로
atoi : 문자열을 int형으로
atol : 문자열을 long형으로

rand(void)
srand(unsigned int seed)
*/

int main()
{
	char* str1="3.14";
	char* str2="100";
	char* str3="10000000";

	double num1;
	int num2;
	long num3;

	num1=atof(str1);
	num2=atoi(str2);
	num3=atol(str3);

	printf("%lf %d %ld \n", num1, num2, num3);
}