#include <stdio.h>

void add(double num1, double num2);

int main()
{
	double x;
	double y;

	void (*pointer)(double, double); // 함수 포인터 선언

	x=3.1;
	y=5.1;

	printf("add 함수의 주소 : %x \n", add);
	printf("함수 포인터의 주소 : %x \n",&pointer);

	pointer = add;
	
	pointer(x,y);

}

void add(double num1, double num2)
{
	double result;
	result = num1, num2;
	printf("%.3lf + %.3lf = %lf \n",num1, num2, result);
}