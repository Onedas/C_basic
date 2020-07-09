#include <stdio.h>

void self_service();
int factorial(int n);

int main()
{
	self_service();
	
	int n=5;
	printf("%d 팩토리얼은 : %d",n, factorial(n));
	return 0;


}

void self_service()
{
	static int i=0;
	i++;
	if (i>5)
		return;

	printf("재귀 %d회\n",i);
	self_service();
}

int factorial(int n)
{
	if (n<=1)
		return 1;
	else
		return n* factorial(n-1);
}
