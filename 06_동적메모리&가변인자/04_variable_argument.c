#include <stdio.h>

/*
가변 인자 : 
*/

void add(int num, ...); //가변 인자 함수 선언

int main()
{
	int a=10, b=20, c=30;

	add(1, a);
	add(2, a, b);
	add(3, a, b, c);

	return 0;
};

void add(int num, ...)
{
	int* p=NULL;
	p=&num+1;

	if(num==1)
		printf("%d \n", *p);
	else if(num==2)
		printf("%d \n", *p+ *(p+1));
	else
		printf("%d \n", p[0]+p[1]+p[2]);
}