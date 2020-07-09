#include <stdio.h>

int main()
{
	int n=0;

	while (n<4)
	{
		for (int i=1;i<=n;i++)
			printf(" ");

		for (int j=1;j<=7-2*n;j++)
			printf("*");

		printf("\n");
		n++;
	}
}