/*input
9
*/

#include <stdio.h>

int main()
{
	int n;

	printf("숫자를 입력하세요 : ");
	scanf("%d",&n);
	printf("%d\n",n);

	for (int i=0; i<=9;i++)
		printf("%d * %d = %d\n",n,i,n*i);
}