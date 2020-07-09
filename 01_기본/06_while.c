/*input
5
6
-1
*/
#include <stdio.h>

int _while()
{
	int a;

	scanf("%d", &a);

	while (a>0)
	{
		if (a%2 == 1)
			printf("홀수\n");
		else
			printf("짝수\n");

		scanf("%d", &a);
	}
};

int do_while()
{
	int a;

	do
	{
		scanf("%d", &a);
		if (a%2 == 1)
			printf("홀수\n");
		else
			printf("짝수\n");
	} while(a>0);
};

int main()
{
	do_while();
}