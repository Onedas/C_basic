#include <stdio.h>
#include <math.h>

/*
ceil : 올림
floor : 내림
fabs : 절대값
pow(x,y) : X^y 
sqrt : 루트
exp : 자연상수
log : 자연로그
log10 : 로그

sin
cos
tan
sinh
cosh
tanh
asin
acos
atan
*/

int main()
{
	double a1=3.14;
	double a2=-3.14;

	printf("%.2lf \n", ceil(a1));
	printf("%.2lf \n", floor(a1));
	printf("--------\n\n");

	printf("%.2lf \n", fabs(a2));
	printf("%.2lf \n", pow(2,8));
	printf("%.2lf \n", sqrt(2));
	printf("--------\n\n");

	printf("%.2lf \n", exp(1));
	printf("%.2lf \n", log(exp(1)));
	printf("%.2lf \n", log10(10));
}