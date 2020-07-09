/*input

*/
#include <stdio.h>

int main()
{
	int a;
	int b;

	b=0;

	for (a=1;a<=100;a++)
	{
		b += a;
		printf("%d번째 까지의 합 %d\n", a,b);
		
	}
};