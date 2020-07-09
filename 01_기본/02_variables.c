#include <stdio.h>

/* 

	char //1byte
	short int //2bytes
	int //4bytes
	long int // 4bytes
	bool //1byte
	float //4bytes
	double //8bytes
	long double //8bytes
*/

int main()
{
	int a;
	float b;
	double c;

	a = 10;
	b = 3.141592f; // f를 붙여주지 않으면 double 형으로 인식할 수 있음.
	c = 3.141592;

	printf("a : %d \n", a);
	printf("b : %f \n", b);
	printf("c : %f \n", c);

	printf("%.2f",1.0);

	return 0;
}

