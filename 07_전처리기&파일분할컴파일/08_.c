#include <stdio.h>

extern int a, b;
int main()
{
	int result =0;
	result = a+b;
	printf("%d \n",result);

	return 0;
}