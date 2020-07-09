#include <stdio.h>

int main()
{
	int a;

	printf("input : ");
	scanf("%d", &a);
	/* 
	%c : char
	%hd : short
	%d : int
	%ld : long
	%f : float
	%lf : double
	*/
	printf("result : %d",a);

	return 0;
}