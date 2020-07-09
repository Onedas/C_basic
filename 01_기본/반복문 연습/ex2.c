#include <stdio.h>

int main()
{
	int i;
	i=1;
	while (i<=5)
	{
		for (int j=1;j<=i;j++)
			printf("*");
		printf("\n");

		i++;
	}
}