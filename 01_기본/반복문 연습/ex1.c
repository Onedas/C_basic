/*input
7
*/

#include <stdio.h>

int main()
{
	int n;
	int count;

	count = 0;

	printf("입력(양의 정수) : ");
	scanf("%d",&n);
	printf("%d\n",n);

	printf("%d의 배수 :",n);
	for (int i=n;i<=100;i+=n)
	{
		printf(" %d",i);
		count++;
	}
	printf("\n%d의 배수 개수 : %d\n",n,count);
}